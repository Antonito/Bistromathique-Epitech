/*
** rd_expr.c for Bistromathique in /Piscine_C_bistromathique
** 
** Made by ludovic petrenko
** Login   <petren_l@epitech.net>
** 
** Started on  Fri Oct 23 14:31:55 2015 ludovic petrenko
** Last update Sun Nov  1 23:33:41 2015 Antoine Baché
*/

#include "../include/my_struct.h"

char	*rd_expr(char *read_size_str)
{
  int	ret;
  int	read_size;
  char	*str;

  read_size = my_getnbr(read_size_str);
  if (read_size < 1)
    my_error(ERROR_MSG);
  str = malloc(read_size + 1);
  if (str == NULL)
    my_error(ERROR_MSG);
  ret = read(0, str, read_size);
  if (ret < 1)
    my_error(ERROR_MSG);
  str[ret] = '\0';
  if (str[ret - 1] == '\n')
    str[ret - 1] = '\0';
  if (my_strlen(str) == 0)
    {
      free(str);
      my_error(SYNTAXE_ERROR_MSG);
    }
  return (str);
}
