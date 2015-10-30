/*
** modinf.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Fri Oct 30 22:21:25 2015 Antoine Baché
** Last update Sat Oct 31 00:24:21 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/foo.h"
#include "include/my_struct.h"

char	*init_mod(char *nb1, char *nb2)
{
  int	i;
  char	*res;

  res = malloc(my_strlen(nb1) + 1);
  if (res == NULL)
    my_error(ERROR_MSG);
  i = 0;
  while (i <= my_strlen(nb1))
    {
      res[i] = 1;
      i = i + 1;
    }
  res[i] = '\0';
  return (res);
}

void	modinf(t_token *t1, t_token *t2, int base)
{
  char	*res;
  char	*tmp;

  tmp = init_mod(t1->data, t2->data);
  if (t2->data[0] == 1 && my_strlen(t2->data) == 1)
    my_error(ERROR_MSG);
  else if (my_cmp(t1->data, t2->data) == 1 ||
	   (my_strlen(t1->data) > my_strlen(t2->data)) &&
	   (my_strlen(t2->data) == 1 && t2->data[0] > 2) &&
	   my_strcmp(t1->data, t2->data) != 0)
    {
      res = div_calc(t1->data, t2->data, base);
      res = mult_calc(base ,res, t2->data, tmp);
      res = sub_calc(t1->data, res, init(t1->data, res),base);
      free(t1->data);
      t1->data = res;
    }
}
