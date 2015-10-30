/*
** my_str_isupper.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:25:16 2015 ludovic petrenko
** Last update Wed Oct  7 22:25:21 2015 ludovic petrenko
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 65 || str[i] > 90)
	return (0);
      i++;
    }
  return (1);
}
