/*
** prepare_list.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 20 10:26:08 2015 ludovic petrenko
** Last update Sun Nov  1 23:03:08 2015 Antoine Baché
*/

#include "../include/my_struct.h"

t_list		*prepare_list(char *base, int base_length, char *ops)
{
  t_list	*list;

  list = malloc(sizeof(t_list));
  if (list == NULL)
    my_error(ERROR_MSG);
  list->level = 0;
  list->first = NULL;
  list->last = NULL;
  list->base = base;
  list->base_length = base_length;
  list->ops = ops;
  return (list);
}
