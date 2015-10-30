/*
** my_strcpy.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:16:45 2015 ludovic petrenko
** Last update Mon Oct 12 20:12:46 2015 ludovic petrenko
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = 0;
  return (dest);
}
