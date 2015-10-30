/*
** my_find_prime_sup.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 22:15:50 2015 ludovic petrenko
** Last update Wed Oct  7 22:16:16 2015 ludovic petrenko
*/

int	my_find_prime_sup(int nb)
{
  while (!my_is_prime(nb))
    nb++;
  return (nb);
}
