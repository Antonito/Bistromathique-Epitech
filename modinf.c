/*
** modinf.c for Bistromathique in /home/bache_a/rendu
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Mon Oct 26 21:20:18 2015 Antoine Baché
** Last update Fri Oct 30 13:52:14 2015 ludovic petrenko
*/

#include <stdlib.h>

char	*expand_nb3_sup(char *nb1, char *nb2, char *nb3)
{
  int	j;

  j = 0;
  while (nb2[j] != '\0')
    {
      nb3[j + 1] = nb2[j];
      j = j + 1;
    }
  while (j + 1 < my_strlen(nb1))
    {
      nb3[j + 1] =  nb2[j];
      j = j + 1;
    }
  return (nb3);
}

char	*result_mod(int i)
{
  char	*result_mod;

  if ((result_mod = malloc(2)) == NULL)
    {
      my_error(ERROR_MSG);
    }
  result_mod[0] = i + 1;
  result_mod[1] = '\0';
  return (result_mod);
}

char	*modinfin(char *nb1, char *nb2)
{
  if ((nb2 - 1)== 2)
    {
      return (((nb1[my_strlen(nb1) - 1]) % 2) + 1);
    }
  else if ((nb2 - 1) == 1)
    {
      return (nb1);
    }
  else
    {
      return (my_subinf(nb1, my_divinf(nb1, nb2));
    }
}

char	*mod_infin_check_z(char *nb1, char *nb2)
{
  if (nb2[0] == 1 && my_strlen(nb2) == 1)
    {
      my_error(ERROR_MSG);
    }
  else
    {
      return (modinfin(nb1, nb2));
    }
}
