/*
** bistro.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 20 09:32:37 2015 ludovic petrenko
** Last update Sun Nov  1 18:49:26 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/my_struct.h"

int		bistro(char **av)
{
  char		*expr;
  t_list	*parse;
  t_token	*result;

  expr = rd_expr(av[3]);
  parse = lexer(expr, av[1], av[2]);
  parser(parse);
  result = calc(parse);
  base_to_str(av[1], result->data);
  if (result->sign == -1)
    my_putchar(av[2][3]);
  my_putstr(result->data);
  free_token(result);
  free(parse);
  return (0);
}
