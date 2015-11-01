/*
** lexer.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 20 09:37:53 2015 ludovic petrenko
** Last update Sun Nov  1 18:26:55 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/my_struct.h"

void		check_valid_list(t_list *list)
{
  t_token	*tmp;

  if (list->level != 0)
    {
      free_list(list);
      my_error(SYNTAXE_ERROR_MSG);
    }
  if (list->first->type == 3)
    {
      tmp = list->first;
      list->first = list->first->next;
      free_token(tmp);
    }
  else if (list->first->type > 1)
    {
      free_list(list);
      my_error(SYNTAXE_ERROR_MSG);
    }
  if (list->last->type > 0 && list->last->type != list->ops[1])
    {
      free_list(list);
      my_error(SYNTAXE_ERROR_MSG);
    }
}

t_list		*lexer(char *expr, char *base, char *ops)
{
  int		n;
  t_list	*lex;

  lex = prepare_list(base, my_strlen(base), ops);
  n = 0;
  while (expr[n])
    {
      if (is_in_str(expr[n], base))
	n += add_nbr(lex, expr + n, 1);
      else if (is_in_str(expr[n], ops))
	n += add_ope(lex, expr + n);
      else
	{
	  free_list(lex);
	  free(expr);
	  my_error(SYNTAXE_ERROR_MSG);
	}
    }
  free(expr);
  check_valid_list(lex);
  return (lex);
}
