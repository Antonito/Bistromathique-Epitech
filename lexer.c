/*
** lexer.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 20 09:37:53 2015 ludovic petrenko
** Last update Sat Oct 31 13:52:54 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/foo.h"

void	check_valid_list(t_list *list)
{
  if (list->level != 0)
    my_error(SYNTAXE_ERROR_MSG);
  if (list->first->type == 3)
    list->first = list->first->next;
  else if (list->first->type > 1)
    my_error(SYNTAXE_ERROR_MSG);
  if (list->last->type > 0 && list->last->type != list->ops[1])
    my_error(SYNTAXE_ERROR_MSG);
}

t_list	*lexer(char *expr, char *base, char *ops)
{
  int	n;
  t_list *lex;

  lex = prepare_list(base, my_strlen(base), ops);
  n = 0;
  while (*expr)
    {
      if (is_in_str(*expr, base))
	n = add_nbr(lex, expr, 1);
      else if (is_in_str(*expr, ops))
	n = add_ope(lex, expr);
      else
	my_error(SYNTAXE_ERROR_MSG);
      expr = expr + n;
    }
  check_valid_list(lex);
  return (lex);
}
