/*
** add_ope.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 20 10:31:44 2015 ludovic petrenko
** Last update Sun Nov  1 23:02:37 2015 Antoine Baché
*/

#include "../include/my_struct.h"

int		add_ope(t_list *list, char *str)
{
  int		n;
  int		t;
  t_token	*token;

  t = is_in_str(str[0], list->ops);
  if (t == 3 || t == 4)
    {
      token = tokenise(NULL, 3, priority(list, list->ops[2]), 0);
      add_to_list(list, token);
      n = unary(list, str);
    }
  else if (t != 0)
    {
      n = ope_only(list, str);
    }
  return (n);
}
