/*
** my_putstr_err.c for Bistromathique in /Piscine_C_bistromathique/lib/my
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 10:31:04 2015 ludovic petrenko
** Last update Fri Oct 30 21:29:18 2015 Antoine Baché
*/

void	my_putstr_err(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar_err(str[i]);
      i = i + 1;
    }
}
