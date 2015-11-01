/*
** my_putstr_err.c for Bistromathique in /Piscine_C_bistromathique/lib/my
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 10:31:04 2015 ludovic petrenko
** Last update Sun Nov  1 22:40:37 2015 Antoine Baché
*/

#include "../include/my_struct.h"

void	my_putstr_err(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar_err(str[i]);
      i = i + 1;
    }
}
