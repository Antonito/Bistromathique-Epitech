/*
** my_putstr.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 10:31:04 2015 ludovic petrenko
** Last update Fri Oct 23 15:22:38 2015 ludovic petrenko
*/

int	my_putstr_err(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar_err(str[i]);
      i++;
    }
}
