/*
** add_ope_function.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 20 14:05:52 2015 ludovic petrenko
** Last update Sun Nov  1 23:32:06 2015 Antoine Baché
*/

#include "../include/my_struct.h"

int	priority(t_list *list, char c)
{
  int	t;

  t = is_in_str(c, list->ops);
  if (t > 4)
    return (3 * (list->level) + 1);
  else
    return (3 * (list->level));
}

int		ope_only(t_list *list, char *str)
{
  int		t;
  int		u;
  int		n;
  t_token	*token;

  t = is_in_str(str[0], list->ops);
  u = is_in_str(str[1], list->ops);
  n = 1;
  if (t == 1 || t == 2)
    ope_function(list, str, t, u);
  else
    ope_funct_other(list, t, u);
  if (u == 3 || u == 4)
    {
      if (t == 2)
	{
	  token = tokenise(NULL, 3, priority(list, str[0]), 0);
	  add_to_list(list, token);
	}
      n = n + unary(list, str + 1);
    }
  return (n);
}

void		unary_parenthesis(t_list *list, int s)
{
  char		*token_str;
  t_token	*token;
  t_token	*mult;

  if (s == -1)
    {
      token_str = malloc(2);
      if (token_str == NULL)
	my_error(ERROR_MSG);
      token_str[1] = 0;
      token_str[0] = 2;
      token = tokenise(token_str, 0, 0, -1);
      add_to_list(list, token);
      mult = tokenise(NULL, 5, priority(list, list->ops[4]) + 1, 0);
      add_to_list(list, mult);
    }
}

int	unary(t_list *list, char *str)
{
  int	i;
  int	n;
  char	s;

  i = 0;
  n = 0;
  s = 1;
  while (str[i] == list->ops[2] || str[i] == list->ops[3])
    {
      if (str[i] == list->ops[3])
	s = -s;
      i = i + 1;
    }
  if (str[i] == list->ops[0])
    unary_parenthesis(list, s);
  else if (is_in_str(str[i], list->base))
    n = add_nbr(list, str + i, s);
  else
    {
      free_list(list);
      my_error(SYNTAXE_ERROR_MSG);
    }
  n = n + i;
  return (n);
}
