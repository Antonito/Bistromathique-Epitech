/*
** my_putchar_err.c for Bistromathique in /Piscine_C_bistromathique/lib/my
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 10:05:44 2015 ludovic petrenko
** Last update Fri Oct 30 21:26:25 2015 Antoine Baché
*/

void	my_putchar_err(char c)
{
  write(2, &c, 1);
}
