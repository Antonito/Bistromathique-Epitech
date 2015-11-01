/*
** infinadd.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by arthur arnaud
** Login   <arnaud_e@epitech.net>
** 
** Started on  Mon Oct 19 09:59:53 2015 arthur arnaud
** Last update Sun Nov  1 23:02:21 2015 Antoine Baché
*/

#include "../include/my_struct.h"

int	value(char *nb, int i)
{
  if (i >= 0)
    return (nb[i] - 1);
  return (0);
}

char	*init(char *n1, char *n2)
{
  int	end;
  int	i;
  char	*res;

  if (my_strlen(n1) > my_strlen(n2))
    end = my_strlen(n1);
  else
    end = my_strlen(n2);
  res = malloc(end + 2);
  if (res == NULL)
    my_error(ERROR_MSG);
  i = 0;
  while (i < end + 1)
    {
      res[i] = 1;
      i = i + 1;
    }
  res[i]= '\0';
  return (res);
}

char	*add_calc(char *n1, char *n2, char *res, int base)
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
  while (end >= 0)
    {
      m = value(n1, i) + value(n2, j) + ret;
      ret = m / base;
      res[end] = m % base + 1;
      end = end - 1;
      i = i - 1;
      j = j - 1;
    }
  return (res);
}

void	infinadd(t_token *t1, t_token *t2, int base)
{
  char	*res;
  char	*n1;
  char	*n2;

  n1 = t1->data;
  n2 = t2->data;
  res = init(n1, n2);
  if (t1->sign * t2->sign == 1)
    res = add_calc(n1, n2, res, base);
  else if (my_cmp(n1, n2) == 1)
    res = sub_calc(n1, n2, res, base);
  else
    {
      res = sub_calc(n2, n1, res, base);
      t1->sign = t2->sign;
    }
  free(t1->data);
  t1->data = res;
}

int	my_cmp(char *n1, char *n2)
{
  if (my_strlen(n1) > my_strlen(n2))
    return (1);
  else if (my_strlen(n1) < my_strlen(n2))
    return (0);
  if (my_strcmp(n1, n2) >= 0)
    return (1);
  return (0);
}
