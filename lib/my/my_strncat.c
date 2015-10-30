/*
** my_strncat.c for Bistromathique in /Piscine_C_bistromathique/lib/my
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:27:08 2015 ludovic petrenko
** Last update Fri Oct 30 21:32:15 2015 Antoine Baché
*/

char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	j;

  i = my_strlen(dest);
  j = 0;
  while (src[j] && j != n)
    {
      dest[i + j] = src[j];
      j = j + 1;
    }
  dest[i + j] = 0;
  return (dest);
}
