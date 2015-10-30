/*
** my_strlen.c for lib in /home/petren_l/rendu/lib
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Wed Oct  7 10:31:25 2015 ludovic petrenko
** Last update Mon Oct 12 20:09:01 2015 ludovic petrenko
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
