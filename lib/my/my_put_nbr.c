/*
** my_put_nbr.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 10:30:19 2015 ludovic petrenko
** Last update Thu Oct 22 17:55:23 2015 ludovic petrenko
*/

int	print(int a)
{
  int	p;
  int	b;
  int	c;

  p = 1000000000;
  b = 0;
  while (p > 0)
    {
      c = a / p;
      a = a % p;
      if (c < 0)
	c = -c;
      if (c != 0)
	{
	  my_putchar(c + 48);
	  b = 1;
	}
      if (c == 0 && b == 1)
	{
	  my_putchar('0');
	}
      p = p / 10;
    }
}

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
    }
  if (nb == 0)
    my_putchar('0');
  print(nb);
}
