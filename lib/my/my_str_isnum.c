/*
** my_str_isnum.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:24:35 2015 ludovic petrenko
** Last update Wed Oct  7 22:24:43 2015 ludovic petrenko
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 48 || str[i] > 57)
	return (0);
      i++;
    }
  return (1);
}
