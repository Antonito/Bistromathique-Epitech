/*
** my_swap.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 10:30:45 2015 ludovic petrenko
** Last update Mon Oct 12 20:06:39 2015 ludovic petrenko
*/

int	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
