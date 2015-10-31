/*
** main.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 20 09:02:34 2015 ludovic petrenko
** Last update Sat Oct 31 20:10:02 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/foo.h"

int	main(int ac, char **av)
{
  if (ac != 4)
    {
      my_putstr_err("usage: ");
      my_putstr_err(av[0]);
      my_putstr_err(" base operators size_read");
      return (1);
    }
  check_args(av);
  bistro(av);
  return (0);
}
