/*
** my_strncat.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:27:08 2015 ludovic petrenko
** Last update Mon Oct 12 20:08:24 2015 ludovic petrenko
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
      j++;
    }
  dest[i + j] = 0;
  return (dest);
}
