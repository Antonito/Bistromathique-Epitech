/*
** is_in_base.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Tue Oct 27 02:13:16 2015 ludovic petrenko
** Last update Fri Oct 30 20:00:20 2015 Antoine Baché
*/

int	is_in_str(char c, char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (c == str[i])
	return (i + 1);
      i = i + 1;
    }
  return (0);
}
