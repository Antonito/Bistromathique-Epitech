/*
** multinf.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by arthur arnaud
** Login   <arnaud_e@epitech.net>
** 
** Started on  Thu Oct 22 18:40:42 2015 arthur arnaud
** Last update Sat Oct 31 13:53:24 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/foo.h"

char	*mult_calc(int base, char *n1, char *n2, char *res)
{
  int	l;
  int	k;
  int	j;
  int	i;

  i = my_strlen(n1);
  j = my_strlen(n2);
  l = 0;
  while (i > 0)
    {
      k = my_strlen(n1) + my_strlen(n2);
      while (j > 0)
	{
	  res[k - l] += (n1[i - 1] - 1) * (n2[j - 1] - 1);
	  res[(k - l) - 1] += (res[k - l] - 1) / base;
	  res[k - l] = ((res[k - l] - 1) % base) + 1;
	  j = j - 1;
	  k = k - 1;
	}
      j = my_strlen(n2);
      i = i - 1;
      l = l + 1;
    }
  return (res);
}

void	multinf(t_token *t1, t_token *t2, int base)
{
  char	*res;
  int	i;
  char	*n1;
  char	*n2;

  n1 = t1->data;
  n2 = t2->data;
  res = malloc(my_strlen(n1) + my_strlen(n2) + 2);
  if (res == NULL)
    my_error(ERROR_MSG);
  i = 0;
  while (i <= (my_strlen(n1) + my_strlen(n2)))
    {
      res[i] = 1;
      i = i + 1;
    }
  res[i] = '\0';
  res = mult_calc(base, n1, n2, res);
  t1->sign = t1->sign * t2->sign;
  free(t1->data);
  t1->data = res;
}
