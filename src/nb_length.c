/*
** nb_length.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 20 09:57:16 2015 ludovic petrenko
** Last update Sun Nov  1 22:28:27 2015 Antoine Baché
*/

#include "../include/my_struct.h"

int	nb_length(char *str, char *base)
{
  int	i;

  i = 0;
  while (is_in_str(str[i], base))
    {
      i = i + 1;
    }
  return (i);
}
