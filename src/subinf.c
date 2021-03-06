/*
** subinf.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Fri Oct 30 21:38:14 2015 Antoine Baché
** Last update Sun Nov  1 23:31:02 2015 Antoine Baché
*/

#include "../include/my_struct.h"

char	*sub_calc(char *n1, char *n2, char *res, int base)
{
  int	i;
  int	j;
  int	m;
  int	ret;
  int	end;

  i = my_strlen(n1) - 1;
  j = my_strlen(n2) - 1;
  end = my_strlen(res) - 1;
  ret = 0;
  while (end)
    {
      m = value(n1, i) - value(n2, j) + ret;
      ret = 0;
      if (m < 0)
	{
	  m = m + base;
	  ret = -1;
	}
      res[end] = m % base + 1;
      end = end - 1;
      i = i - 1;
      j = j - 1;
    }
  return (res);
}
