/*
** my_putchar.c for Bistromathique in /Piscine_C_bistromathique/lib/my
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 10:05:44 2015 ludovic petrenko
** Last update Sun Nov  1 23:03:37 2015 Antoine Baché
*/

#include "../include/my_struct.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
