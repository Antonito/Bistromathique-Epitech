/*
** my_str_swap.c for day 10 in /home/petren_l/rendu/lib/lib/my
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Mon Oct 12 22:40:38 2015 ludovic petrenko
** Last update Mon Oct 12 22:41:41 2015 ludovic petrenko
*/

void	my_str_swap(char **str, char **str2)
{
  char	*temp;

  temp = *str;
  *str = *str2;
  *str2 = temp;
}
