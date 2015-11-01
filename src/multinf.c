/*
** multinf.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by arthur arnaud
** Login   <arnaud_e@epitech.net>
** 
** Started on  Thu Oct 22 18:40:42 2015 arthur arnaud
** Last update Sun Nov  1 23:04:46 2015 Antoine Baché
*/

#include "../include/my_struct.h"

char	*mult_calc(int base, char *n1, char *n2, char *res)
{
  int   i;
  int   j;
  int   tmp;

  i = my_strlen(n2);
  while (i > 0)
    {
      j = my_strlen(n1);
      while (j > 0)
        {
          tmp = res[i + j] + (n1[j - 1] - 1) * (n2[i - 1] - 1) - 1;
          res[i + j - 1] += tmp / base;
          res[i + j] = (tmp % base) + 1;
          j = j - 1;
        }
      i = i - 1;
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
