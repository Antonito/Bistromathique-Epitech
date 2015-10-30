/*
** my_getnbr.c for Bistromathique in /Piscine_C_bistromathique/lib/my
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:08:22 2015 ludovic petrenko
** Last update Fri Oct 30 21:28:28 2015 Antoine Baché
*/

int	my_getnbr(char *str)
{
  int	i;
  int	s;
  long	r;

  i = 0;
  s = 1;
  r = 0;
  while (str[i] == 43 || str[i] == 45)
    {
      if (str[i] == 45)
	s = -s;
      i = i + 1;
    }
  str = str + i;
  i = 0;
  while (str[i] > 47 && str[i] < 58)
    {
      r = r * 10;
      r = r + str[i] - 48;
      i = i + 1;
    }
  return (r > 2147483647 || r < -2147483648 ? 0 : s * r);
}
