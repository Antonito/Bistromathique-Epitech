/*
** divinf.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Fri Oct 30 22:56:50 2015 Antoine Baché
** Last update Sun Nov  1 00:54:25 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/my_struct.h"

char	*retract_div(char *nb3)
{
  int	i;

  i = 0;
  while (nb3[i] != '\0')
    i = i + 1;
  if (i - 1 < 0)
    i = 1;
  nb3[i - 1] = '\0';
  return (nb3);
}

char	*expand_div(char *nb1, char *nb2)
{
  char	*nb3;
  int	i;

  i = 0;
  nb3 = malloc(my_strlen(nb1) + 2);
  if (nb3 == NULL)
    return (NULL);
  while (i < my_strlen(nb1))
    {
      nb3[i] = 1;
      i = i + 1;
    }
  nb3[i] = 0;
  i = my_strlen(nb2) - 1;
  while (i >= 0)
    {
      nb3[i] = nb2[i];
      i = i - 1;
    }
  if (my_strcmp(nb1, nb3) < 0)
    retract_div(nb3);
  return (nb3);
}

char	*div_calc(char *nb1, char *nb2, int base)
{
  int	i;
  int	j;
  char	*res;
  char	*nb3;

  if ((res = malloc(my_strlen(nb1) + 1)) == NULL)
    my_error(ERROR_MSG);
  nb3 = expand_div(nb1, nb2);
  j = 0;
  while (my_cmp(nb3, nb2) != 0)
    {
      i = 0;
      while ((my_strlen(nb3) == my_strlen(nb1) && my_strcmp(nb3, nb1) <= 0) ||
	     (my_strlen(nb3) < my_strlen(nb1) && my_strcmp(nb3, nb1) > 0))
	{
	  nb1 = sub_calc(nb1, nb3, init(nb1, nb3), base);
	  clear_zero(nb1);
	  i = i + 1;
	}
      nb3 = retract_div(nb3);
      res[j] = i + 1;
      j = j + 1;
    }
  res[j] = 0;
  free(nb3);
  return (res);
}

char	*div_bigger(char *nb1, char *nb2)
{
  char	*res;

  if (my_strlen(nb2) == 1 && nb2[0] == 2)
    {
      return (nb1);
    }
  else
    {
      if ((res = malloc(2)) == NULL)
	my_error(ERROR_MSG);
      if (my_strcmp(nb1, nb2) == 0)
	res[0] = 2;
      else
	res[0] = 1;
      res[1] = 0;
      return (res);
    }
}

void	divinf(t_token *t1, t_token *t2, int base)
{
  char	*res;

  if ((res = malloc(my_strlen(t1->data) + 1)) == NULL)
    my_error(ERROR_MSG);
  if (my_strlen(t2->data) == 1 && t2->data[0] == 1)
    my_error(ERROR_MSG);
  else if (my_cmp(t1->data, t2->data) == 0 ||
	   (t2->data[0] == 2 && my_strlen(t2->data) == 1) ||
	   (my_strcmp(t1->data, t2->data) == 0))
    res = div_bigger(t1->data, t2->data);
  else
    res = div_calc(t1->data, t2->data, base);
  t1->sign = t1->sign * t2->sign;
  t1->data = res;
}
