/*
** my_sort_int_tab.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 10:17:33 2015 ludovic petrenko
** Last update Wed Oct  7 22:10:56 2015 ludovic petrenko
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	k;

  i = 0;
  k = 1;
  while (k)
    {
      k = 0;
      while (i < size - 1)
	{
	  if (tab[i] > tab[i + 1])
	    {
	      my_swap(tab + i, tab + i + 1);
	      k = 1;
	    }
	}
    }
}
