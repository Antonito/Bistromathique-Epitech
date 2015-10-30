/*
** my_strndup.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 20 09:49:34 2015 ludovic petrenko
** Last update Fri Oct 30 20:02:49 2015 Antoine Baché
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/my_struct.h"
#include "include/foo.h"

char	*my_strndup(char *src, int n)
{
  char	*dest;
  int	i;

  i = 0;
  dest = malloc(n + 1);
  if (dest == NULL)
    my_error(ERROR_MSG);
  while (i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = 0;
  return (dest);
}

char	*my_strdup(char *src)
{
  char	*dest;
  int	i;
  int	n;

  i = 0;
  n = my_strlen(src);
  dest = malloc(n + 1);
  if (dest == NULL)
    my_error(ERROR_MSG);
  while (i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = 0;
  return (dest);
}
