/*
** my_str_islower.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:25:01 2015 ludovic petrenko
** Last update Wed Oct  7 22:25:06 2015 ludovic petrenko
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 97 || str[i] > 122)
	return (0);
      i++;
    }
  return (1);
}
