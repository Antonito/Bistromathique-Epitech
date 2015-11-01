/*
** modinf.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Fri Oct 30 22:21:25 2015 Antoine Baché
** Last update Sun Nov  1 20:22:35 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/my_struct.h"

char	*init_mod(char *nb1, char *nb2)
{
  int	i;
  int	k;
  char	*res;

  k = my_strlen(nb1) + my_strlen(nb2);
  res = malloc(k + 2);
  if (res == NULL)
    my_error(ERROR_MSG);
  i = 0;
  while (i <= k)
    {
      res[i] = 1;
      i = i + 1;
    }
  res[i] = '\0';
  return (res);
}

void	check_mod(char *nb1, char *nb2, char *res)
{
  if (my_strcmp(nb1, nb2) == 0)
    {
      res[0] = 1;
      res[1] = 0;
    }
}

void	modinf(t_token *t1, t_token *t2, int base)
{
  int	i;
  char	*res;
  char	*tmp;
  char	*tmp2;

  i = 0;
  if (t2->data[0] == 1 && my_strlen(t2->data) == 1)
    my_error(ERROR_MSG);
  else if (my_cmp(t1->data, t2->data) == 1)
    {
      tmp2 = my_strdup(t1->data);
      tmp = div_calc(tmp2, t2->data, base, i);
      clear_zero(tmp);
      res = mult_calc(base, tmp, t2->data, init_mod(t2->data, tmp));
      free(tmp);
      clear_zero(res);
      tmp = res;
      res = sub_calc(t1->data, tmp, init(t1->data, tmp), base);
      free(tmp);
      check_mod(t1->data, t2->data, res);
      free(t1->data);
      t1->data = res;
    }
}
