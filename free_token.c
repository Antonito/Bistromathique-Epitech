/*
** free_token.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct 28 19:36:02 2015 ludovic petrenko
** Last update Sun Nov  1 18:24:03 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my_struct.h"

void	free_token(t_token *token)
{
  if (token->type == 0)
    free(token->data);
  free(token);
}

void		free_list(t_list *list)
{
  t_token	*token;
  t_token	*tmp;

  token = list->first;
  while (token != NULL)
    {
      tmp = token->next;
      free_token(token);
      token = tmp;
    }
  free(list);
}
