/*
** add_to_list.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 20 10:13:58 2015 ludovic petrenko
** Last update Fri Oct 30 19:55:33 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my_struct.h"

void	add_to_list(t_list *list, t_token *token)
{
  if (list->first == NULL)
    list->first = token;
  else
    list->last->next = token;
  token->next = NULL;
  list->last = token;
}
