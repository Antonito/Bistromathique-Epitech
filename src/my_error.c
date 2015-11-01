/*
** error.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Fri Oct 23 15:39:58 2015 ludovic petrenko
** Last update Sun Nov  1 23:03:33 2015 Antoine Baché
*/

#include "../include/my_struct.h"

void	my_error(char *error_msg)
{
  my_putstr_err(error_msg);
  exit(1);
}
