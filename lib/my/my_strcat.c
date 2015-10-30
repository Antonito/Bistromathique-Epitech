/*
** my_strcat.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:26:35 2015 ludovic petrenko
** Last update Wed Oct  7 22:26:45 2015 ludovic petrenko
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = my_strlen(dest);
  j = 0;
  while (src[j])
    {
      dest[i + j] = src[j];
      j++;
    }
  dest[i + j] = 0;
  return (dest);
}
