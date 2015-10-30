/*
** my_strcat.c for Bistromathique in /Piscine_C_bistromathique/lib/my
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:26:35 2015 ludovic petrenko
** Last update Fri Oct 30 21:29:03 2015 Antoine Baché
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
      j = j + 1;
    }
  dest[i + j] = 0;
  return (dest);
}
