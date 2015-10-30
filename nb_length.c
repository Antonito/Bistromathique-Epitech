/*
** nb_length.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 20 09:57:16 2015 ludovic petrenko
** Last update Fri Oct 30 20:03:18 2015 Antoine Baché
*/

#include "include/foo.h"

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
