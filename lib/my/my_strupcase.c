/*
** my_strupcase.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:21:59 2015 ludovic petrenko
** Last update Mon Oct 12 20:07:10 2015 ludovic petrenko
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] > 64 && str[i] < 91)
	str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
