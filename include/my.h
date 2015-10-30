/*
** my.h for Bistromathique in /Piscine_C_bistromathique/lib/my
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Fri Oct 30 20:08:54 2015 Antoine Baché
** Last update Fri Oct 30 21:33:37 2015 Antoine Baché
*/

#ifndef MY_H_
# define MY_H_

void	my_putchar(char c);
void	my_putchar_err(char c);
void	my_putstr(char *str);
void	my_putstr_err(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int nb);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int nb);
char	*my_strcat(char *dest, char *src);
char	*my_strncat(char *dest, char *src, int nb);

#endif /* !MY_H_ */
