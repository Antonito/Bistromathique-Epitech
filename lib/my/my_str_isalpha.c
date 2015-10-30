/*
** my_str_isalpha.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:24:13 2015 ludovic petrenko
** Last update Wed Oct  7 22:24:23 2015 ludovic petrenko
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if ((str[i] < 41 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
	return (0);
      i++;
    }
  return (1);
}
