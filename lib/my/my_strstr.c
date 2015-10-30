/*
** my_strstr.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:18:55 2015 ludovic petrenko
** Last update Wed Oct  7 22:19:11 2015 ludovic petrenko
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  int	c;

  i = 0;
  if (*to_find == 0)
    return (str);
  while (str[i])
    {
      j = 0;
      c = 0;
      while (to_find[j])
	{
	  if (str[i + j] == to_find[j])
	    c++;
	  else
	    c = 0;
	  if (to_find[c] == 0)
	    return (str + i);
	  j++;
	}
      i++;
    }
  return (0);
}
