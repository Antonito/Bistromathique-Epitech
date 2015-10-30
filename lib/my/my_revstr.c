/*
** my_revstr.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:18:22 2015 ludovic petrenko
** Last update Wed Oct  7 22:18:38 2015 ludovic petrenko
*/

char	*my_revstr(char *str)
{
  int	l;
  int	i;
  char	a;

  i = 0;
  l = my_strlen(str);
  while (i < l / 2)
    {
      a = str[i];
      str[i] = str[l - i - 1];
      str[l - i - 1] = a;
      i++;
    }
  return (str);
}
