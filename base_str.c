/*
** base_str.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 27 17:24:04 2015 ludovic petrenko
** Last update Fri Oct 30 19:55:51 2015 Antoine Baché
*/

#include "include/foo.h"

void	base_to_str(char *base, char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      str[i] = base[str[i] - 1];
      i = i + 1;
    }
}

void	str_to_base(char *base, char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      str[i] = is_in_str(str[i], base);
      i = i + 1;
    }
}
