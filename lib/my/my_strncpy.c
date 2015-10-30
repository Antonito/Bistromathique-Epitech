/*
** my_strncpy.c for Bistromathique in /Piscine_C_bistromathique/lib/my
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Mon Oct  5 11:15:36 2015 ludovic petrenko
** Last update Fri Oct 30 21:33:31 2015 Antoine Baché
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n && src[i])
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
