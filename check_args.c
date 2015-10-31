/*
** check_args.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Fri Oct 23 13:26:12 2015 ludovic petrenko
** Last update Sat Oct 31 05:54:34 2015 Antoine Baché
*/

#include "include/my.h"
#include "include/foo.h"

void	check_doublon(char *str)
{
  int	i;
  int	n;

  while (*str)
    {
      i = 1;
      n = my_strlen(str);
      while (i < n)
	{
	  if (str[0] == str[i])
	    my_error(SYNTAXE_ERROR_MSG);
	  i = i + 1;
	}
      str = str + 1;
    }
}

void	check_args(char **av)
{
  int	i;
  int	j;
  char	e;

  i = 0;
  e = 0;
  if (my_strlen(av[2]) != 7 || my_strlen(av[1]) < 2)
      my_error(SYNTAXE_ERROR_MSG);
  while (av[1][i] && !e)
    {
      j = 0;
       while (av[2][j] && !e)
	{
	  if (av[1][i] == av[2][j])
	    e = av[1][i];
	  j = j + 1;
	}
      i = i + 1;
    }
  if (e != 0)
      my_error(SYNTAXE_ERROR_MSG);
  check_doublon(av[1]);
  check_doublon(av[2]);
}
