/*
** my_strncpy.c for day 06 in /ex_03
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Mon Oct  5 11:15:36 2015 ludovic petrenko
** Last update Mon Oct 12 20:07:53 2015 ludovic petrenko
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n && src[i])
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
