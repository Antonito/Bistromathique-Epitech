/*
** modinf.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Fri Oct 30 22:21:25 2015 Antoine Baché
** Last update Sat Oct 31 22:16:50 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/foo.h"

char	*init_mod(char *nb1)
{
  int	i;
  char	*res;

  res = malloc(my_strlen(nb1) + 2);
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

  if (t2->data[0] == 1 && my_strlen(t2->data) == 1)
    my_error(ERROR_MSG);
  else if (my_cmp(t1->data, t2->data) == 1 ||
	   (my_strlen(t1->data) > my_strlen(t2->data)) &&
	   (my_strlen(t2->data) == 1 && t2->data[0] > 2) &&
	   my_strcmp(t1->data, t2->data) != 0)
    {
      tmp = div_calc(t1->data, t2->data, base);
      clear_zero(tmp);
      res = mult_calc(base, tmp, t2->data, init_mod(t1->data));
      free(tmp);
      clear_zero(res);
      tmp = res;
      res = sub_calc(t1->data, tmp, init(t1->data, tmp), base);
      free(tmp);
      free(t1->data);
      t1->data = res;
    }
}
