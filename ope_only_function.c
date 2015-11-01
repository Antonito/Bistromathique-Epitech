/*
** ope_only_function.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Sun Nov  1 15:54:04 2015 Antoine Baché
** Last update Sun Nov  1 16:03:02 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my_struct.h"

void	ope_function(t_list *list, char *str, int t, int u)
{
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
}

void	ope_funct_else(t_list *list, t_token *token, int t, int u)
{
  token = tokenise(NULL, t, priority(list, list->ops[t - 1]), 0);
  add_to_list(list, token);
  if (u > 4 || u == 2)
    my_error(SYNTAXE_ERROR_MSG);
}
