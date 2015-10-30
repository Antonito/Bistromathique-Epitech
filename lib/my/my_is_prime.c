/*
** my_is_prime.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:13:59 2015 ludovic petrenko
** Last update Wed Oct  7 22:15:00 2015 ludovic petrenko
*/

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  if (nb < 2)
    return (0);
  while (i < nb && i <= 46340)
    {
      if (nb % i == 0)
	return (0);
      i++;
    }
  return (1);
}
