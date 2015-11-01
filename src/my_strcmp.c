/*
** my_strcmp.c for Bistromathique in /Piscine_C_bistromathique/lib/my
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:19:43 2015 ludovic petrenko
** Last update Sun Nov  1 22:40:57 2015 Antoine Baché
*/

#include "../include/my_struct.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	j;
  int	t;

  i = 0;
  j = 0;
  t = my_strlen(s1);
  if ( t < my_strlen(s2))
    t = my_strlen(s2);
 while (i < t + 1 && !j)
    {
      if (s1[i] != s2[i])
	j = s1[i] - s2[i];
      i = i + 1;
    }
  return (j);
}
