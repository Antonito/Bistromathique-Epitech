/*
** divinf.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Sun Oct 25 10:00:27 2015 Antoine Baché
** Last update Fri Oct 30 20:10:30 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my_struct.h"
#include "include/my.h"
#include "include/foo.h"

char	*expand_nb3(char *nb1, char *nb2, char *nb3)
{
  int	j;
  int	i;

  j = 0;
  i = (((my_strlen(nb1) - 1 - my_strlen(nb2)) < 0) ? 0 :
       my_strlen(nb1) - 1 - my_strlen(nb2))
  if (nb2[0] <= nb1[0])
    {
      while (nb2[j] != '\0')
	{
	  nb3[j] = nb2[j];
	  j = j + 1;
	}
      while (j < my_strlen(nb1))
	{
	  nb3[j] = 1;
	   j = j + 1;
	}
      return (nb3);
    }
  else
    {
      return (expand_nb3_sup(nb1, nb2, nb3));
    }
}

char	*retract_nb3(char *nb3, char *nb2)
{
  int	i;

  i = 0;
  while (nb3[i] != '\0')
    {
      i = i + 1;
    }
  if (i - 1 < 0)
    {
      i = 1;
    }
  nb3[i - 1] = '\0';
  return (nb3);
}

char	*my_divide(char *nb1, char *nb2, char *nb3)
{
  int	k;
  int	j;
  char	*result;

  if ((result = malloc(my_strlen(nb1) + 1)) == NULL)
    {
      my_error(ERROR_MSG);
    }
  nb3 = expand_nb3(nb1, nb2, nb3);
  j = 0;
  while (my_strcmp(nb2, nb3) != 0)
    {
      k = 0;
      while (my_subinf(nb1, nb3) > 0)
	{
	  nb1 = my_subinf(nb1, nb3);
	  k = k + 1;
	}
      retract_nb3(nb3, nb2);
      result[j] = k + 48;
      j = j + 1;
    }
  return (result);
}

void	my_divinfin(t_token *t1, t_token *t2)
{
  char	*nb1;
  char	*nb2;
  char	*nb3;

  nb1 = t1->data;
  nb2 = t2->data;
  if (nb2[0] == 1 && my_strlen(nb2) == 1)
    my_error(ERROR_MSG);
  if (my_strlen(nb2) > my_strlen(nb1))
      t1->data = result_mod(0);
  else if (my_strcmp(nb1, nb2) == 0)
      t1->data = result_mod(1);
  else
    {
      if ((nb3 = malloc(my_strlen(nb1))) == NULL)
	my_error(ERROR_MSG);
      t1->data = my_divide(nb1, nb2, nb3);
    }
  free(nb1);
  free(nb3);
}
