##
## Makefile for Bistromathique in /Piscine_C_bistromathique
## 
## Made by Antoine Baché
## Login   <bache_a@epitech.net>
## 
## Started on  Fri Oct 30 20:05:42 2015 Antoine Baché
## Last update Sun Nov  1 20:25:38 2015 Antoine Baché
##


SRC=	addinf.c \
	add_nbr.c \
	add_ope.c \
	add_ope_function.c \
	add_to_list.c \
	bistro.c \
	base_str.c \
	check_args.c \
	clear_zero.c \
	do_op.c \
	divinf.c \
	divinf_calc.c \
	free_token.c \
	is_in_str.c \
	lexer.c \
	main.c \
	modinf.c \
	multinf.c \
	my_error.c \
	my_strndup.c \
	nb_length.c \
	ope_only_function.c \
	parser.c \
	prepare_list.c \
	rd_expr.c \
	subinf.c \
	tokenise.c

NAME=	calc

HEADER=	my.h

CC=	cc

RM=	rm -f

OBJ=	$(SRC:.c=.o)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) -lmy -Llib

all: 	$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
