/*
** add_nbr.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 27 02:28:46 2015 ludovic petrenko
** Last update Sat Oct 31 13:50:52 2015 Antoine Baché
*/

#include "include/foo.h"

int		add_nbr(t_list *list, char *str, char sign)
{
  int		n;
  char		*token_str;
  t_token	*token;

  n = nb_length(str, list->base);
  token_str = my_strndup(str, n);
  str_to_base(list->base, token_str);
  token = tokenise(token_str, 0, 0, sign);
  add_to_list(list, token);
  if (str[n] == list->ops[0])
    my_error(SYNTAXE_ERROR_MSG);
  clear_zero(token->data);
  return (n);
}
