/*
** my_put_nbr.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 10:30:19 2015 ludovic petrenko
** Last update Fri Oct 23 15:43:15 2015 ludovic petrenko
*/

int	print_err(int a)
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
	  my_putchar_err(c + 48);
	  b = 1;
	}
      if (c == 0 && b == 1)
	{
	  my_putchar_err('0');
	}
      p = p / 10;
    }
}

int	my_put_nbr_err(int nb)
{
  if (nb == 0)
    my_putchar_err('0');
  print(nb);
}
