/*
** my_str_isprintable.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:25:36 2015 ludovic petrenko
** Last update Wed Oct  7 22:25:40 2015 ludovic petrenko
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 32 || str[i] == 127)
	return (0);
      i++;
    }
  return (1);
}
