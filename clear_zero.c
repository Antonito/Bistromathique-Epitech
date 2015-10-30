/*
** clear_zero.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct 28 19:48:03 2015 ludovic petrenko
** Last update Fri Oct 30 19:57:16 2015 Antoine Baché
*/

void	clear_zero(char *str)
{
  int	n;
  int	i;

  i = 0;
  n = 0;
  while (str[n] == 1)
    {
      n = n + 1;
    }
  while (str[n])
    {
      str[i] = str[n];
      i = i + 1;
      n = n + 1;
    }
  i = (i == 0) ? 1 : i;
  str[i] = 0;
}
