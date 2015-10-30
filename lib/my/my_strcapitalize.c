/*
** my_strcapitalize.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:22:51 2015 ludovic petrenko
** Last update Wed Oct  7 22:23:25 2015 ludovic petrenko
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] > 96 && str[i] < 123)
	{
	  if (i == 0 || str[i - 1])
	      str[i] = str[i] - 32;
	  else
	    str[i] = str[i] + 32;
	}
      i++;
    }
  return (str);
}
