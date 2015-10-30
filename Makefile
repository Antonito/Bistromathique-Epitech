##
## Makefile for Bistromathique in /Piscine_C_bistromathique
## 
## Made by Antoine Baché
## Login   <bache_a@epitech.net>
## 
## Started on  Fri Oct 30 20:05:42 2015 Antoine Baché
## Last update Fri Oct 30 21:39:29 2015 Antoine Baché
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
	free_token.c \
	is_in_str.c \
	lexer.c \
	main.c \
	multinf.c \
	my_error.c \
	my_strndup.c \
	nb_length.c \
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

CFLAGS= -W -Wall -Werror -Wformat -Wformat-security -Wformat-nonliteral -Wformat=2 -Wno-format-extra-args -g

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) -lmy -Llib

all: 	$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
