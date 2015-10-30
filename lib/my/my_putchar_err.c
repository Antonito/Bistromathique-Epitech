/*
** my_putchar.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 10:05:44 2015 ludovic petrenko
** Last update Fri Oct 30 18:32:07 2015 ludovic petrenko
*/

void	my_putchar_err(char c)
{
  write(2, &c, 1);
}
