/*
** divinf.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Fri Oct 30 22:56:50 2015 Antoine Baché
** Last update Sun Nov  1 20:22:07 2015 Antoine Baché
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

char	*div_calc(char *nb1, char *nb2, int base, int i)
{
  char	*res;

  if ((res = malloc(my_strlen(nb1) + 1)) == NULL)
    my_error(ERROR_MSG);
  div_calc_while(nb1, nb2, res, base);
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
  int	i;
  char	*res;

  i = 0;
  if ((res = malloc(my_strlen(t1->data) + 1)) == NULL)
    my_error(ERROR_MSG);
  if (my_strlen(t2->data) == 1 && t2->data[0] == 1)
    my_error(ERROR_MSG);
  else if (my_cmp(t1->data, t2->data) == 0 ||
	   (t2->data[0] == 2 && my_strlen(t2->data) == 1) ||
	   (my_strcmp(t1->data, t2->data) == 0))
    {
      free(res);
      res = div_bigger(t1->data, t2->data);
    }
  else
    res = div_calc(t1->data, t2->data, base, i);
  t1->sign = t1->sign * t2->sign;
  t1->data = res;
}
