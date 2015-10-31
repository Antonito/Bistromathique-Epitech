/*
** add_ope_function.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 20 14:05:52 2015 ludovic petrenko
** Last update Sat Oct 31 05:55:51 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my_struct.h"
#include "include/my.h"
#include "include/foo.h"

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
  t_token	*token2;

  t = is_in_str(str[0], list->ops);
  u = is_in_str(str[1], list->ops);
  n = 1;
  if (t == 1)
    {
      list->level = list->level + 1;
      if (u == 2 || u > 4)
	my_error(SYNTAXE_ERROR_MSG);
    }
  else if (t == 2)
    {
      list->level = list->level - 1;
      if (list->level < 0 || (u < 2 && str[1] != 0))
	my_error(SYNTAXE_ERROR_MSG);
    }
  else
    {
      token = tokenise(NULL, t, priority(list, str[0]), 0);
      add_to_list(list, token);
      if (u > 4 || u == 2)
	my_error(SYNTAXE_ERROR_MSG);
    }
  if (u == 3 || u == 4)
    {
      if (t == 2)
	{
	  token2 = tokenise(NULL, 3, priority(list, str[0]), 0);
	  add_to_list(list, token2);
	}
      n = n + unary(list, str + 1);
    }
  return (n);
}

void		unary_parenthesis(t_list *list)
{
  char		*token_str;
  t_token	*token;
  t_token	*mult;

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

int		unary(t_list *list, char *str)
{
  int		i;
  int		n;
  char		s;

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
    {
      if (s == -1)
	unary_parenthesis(list);
    }
  else if (is_in_str(str[i], list->base))
    n = add_nbr(list, str + i, s);
  else
    my_error(SYNTAXE_ERROR_MSG);
  n = n + i;
  return (n);
}
