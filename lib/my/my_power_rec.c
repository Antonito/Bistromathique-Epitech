/*
** my_power_rec.c for day 05 in /home/petren_l/rendu/Piscine_C_J05
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Fri Oct  2 18:56:13 2015 ludovic petrenko
** Last update Fri Oct  9 16:13:25 2015 ludovic petrenko
*/

int	my_power_rec(int nb, int power)
{
  if (power < 0)
    return (0);
  else if (power == 0)
    return (1);
  return (my_power_rec(nb, power - 1));
}
