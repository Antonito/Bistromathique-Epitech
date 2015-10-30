/*
** my_strlowcase.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:22:18 2015 ludovic petrenko
** Last update Wed Oct  7 22:22:27 2015 ludovic petrenko
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] > 96 && str[i] < 123)
	str[i] = str[i] - 32;
      i++;
    }
  return (str);
}
