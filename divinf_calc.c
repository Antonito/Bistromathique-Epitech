/*
** divinf_calc.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Sun Nov  1 16:34:34 2015 Antoine Baché
** Last update Sun Nov  1 16:44:58 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/my_struct.h"

void	div_calc_while(char *nb1, char *nb2, char *res, int base)
{
  int	i;
  int	j;
  char	*tmp;
  char	*nb3;

  j = 0;
  nb3 = expand_div(nb1, nb2);
  while (my_cmp(nb3, nb2) != 0)
    {
      i = 0;
      while ((my_strlen(nb3) == my_strlen(nb1) && my_strcmp(nb3, nb1) <= 0) ||
             (my_strlen(nb3) < my_strlen(nb1) && my_strcmp(nb3, nb1) > 0))
        {
	  tmp = nb1;
          nb1 = sub_calc(nb1, nb3, init(nb1, nb3), base);
          clear_zero(nb1);
	  free(tmp);
          i = i + 1;
        }
      nb3 = retract_div(nb3);
      res[j] = i + 1;
      j = j + 1;
    }
  res[j] = 0;
  free(nb3);
}
