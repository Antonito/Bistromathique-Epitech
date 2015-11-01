/*
** my_putchar_err.c for Bistromathique in /Piscine_C_bistromathique/lib/my
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 10:05:44 2015 ludovic petrenko
** Last update Sun Nov  1 23:06:37 2015 Antoine Baché
*/

#include "../include/my_struct.h"

void	my_putchar_err(char c)
{
  write(2, &c, 1);
}
