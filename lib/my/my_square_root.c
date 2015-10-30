/*
** my_square_root.c for day 05 in /home/petren_l/rendu/Piscine_C_J05
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Mon Oct  5 10:00:57 2015 ludovic petrenko
** Last update Mon Oct  5 10:35:10 2015 ludovic petrenko
*/

int	my_square_root(int nb)
{
  int	i;

  i = 1;
  if (nb < 1)
    return (0);
  while (i * i <= nb && i < 46341)
    {
      if (i * i == nb)
	return (i);
      i++;
    }
  return (0);
}
