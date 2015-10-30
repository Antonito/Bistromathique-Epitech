/*
** foo.h for Bistromathique in /Piscine_C_bistromathique/include
** 
** Made by Antoine Baché
** Login   <bache_a@epitech.net>
** 
** Started on  Fri Oct 30 20:06:14 2015 Antoine Baché
** Last update Fri Oct 30 20:06:31 2015 Antoine Baché
*/


#include "my_struct.h"

#ifndef FOO_H_
# define FOO_H_

# define SYNTAX_ERROR_MSG ("Syntax error")
# define ERROR_MSG ("Error")

char		*add_calc(char *n1, char *n2, char *res, int base);
int		add_nbr(t_list *list, char *str, char sign);
int		add_ope(t_list *list, char *str);
void		add_to_list(t_list *list, t_token *token);
void		add_stack(t_token **stack, t_token *token);
void		base_to_str(char *base, char *str);
int		bistro(char **av);
t_token		*calc(t_list *parse);
void		clear_zero(char *str);
void		check_args(char **av);
void		check_doublon(char *str);
void		check_valid_list(t_list *list);
void		do_op(t_token **stack, t_token *op, int base);
void		free_token(t_token *token);
void		infinadd(t_token *t1, t_token *t2, int base);
char		*init(char *n1, char *n2);
int		is_in_str(char c, char *str);
t_list		*lexer(char *expr, char *base, char *ope);
char		*mult_calc(int base, char *n1, char *n2, char *res);
void		multinf(t_token *token1, t_token *token2, int base);
int		my_cmp(char *n1, char *n2);
void		my_error(char *error_msg);
void		my_aff_list(t_list *list);
char		*my_strdup(char *src);
char		*my_strndup(char *src, int n);
char		*negative(char *str, int s, int *n);
int		nb_length(char *str, char *base);
int		ope_only(t_list *list, char *str);
void		parser(t_list *list);
t_list		*prepare_list(char *base, int base_length, char *ops);
void		prioprs(t_token **stack, t_token *token, t_list *s_list);
int		priority(t_list *list, char c);
char		*rd_expr(char *read_size_str);
void		set_op(void (**tab)(t_token*, t_token*, int));
char		*sign(char *str, int *n);
void		str_to_base(char *base, char *str);
char		*sub_calc(char *n1, char *n2, char *res, int base);
t_token		*tokenise(char *str, int type, int priority, char sign);
int		unary(t_list *list, char *str);
void		unary_parenthesis(t_list *list);
int		value(char *nb, int i);

#endif /* !FOO_H_ */