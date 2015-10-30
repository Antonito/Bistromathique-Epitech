/*
** my_strlen.c for Bistromathique in /Piscine_C_bistromathique/lib/my
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 10:31:25 2015 ludovic petrenko
** Last update Fri Oct 30 21:31:26 2015 Antoine Baché
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}
