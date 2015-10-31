/*
** tokenise.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 20 10:16:54 2015 ludovic petrenko
** Last update Sat Oct 31 13:54:44 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/foo.h"

t_token		*tokenise(char *str, int type, int priority, char sign)
{
  t_token	*token;

  token = malloc(sizeof(t_token));
  if (token == NULL)
    my_error(ERROR_MSG);
  if (type == 0)
    token->data = str;
  token->type = type;
  token->priority = priority;
  token->sign = sign;
  return (token);
}
