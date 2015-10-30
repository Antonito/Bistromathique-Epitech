/*
** my_struct.h for Bistromathique in /Piscine_C_bistromathique/include
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Fri Oct 30 20:07:19 2015 Antoine Baché
** Last update Fri Oct 30 20:07:29 2015 Antoine Baché
*/

#ifndef MY_STRUCT_H_
# define MY_STRUCT_H_

typedef struct		s_token
{
  char			*data;
  int			type;
  char			sign;
  int			priority;
  struct s_token	*next;
}			t_token;

typedef struct	s_list
{
  int		level;
  int		*(**calc)(int, int);
  char		*base;
  int		base_length;
  char		*ops;
  t_token	*first;
  t_token	*last;
}		t_list;

#endif /* !MY_STRUCT_H_ */
