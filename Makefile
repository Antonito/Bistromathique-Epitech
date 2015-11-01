##
## Makefile for Bistromathique in /Piscine_C_bistromathique
## 
## Made by Antoine Baché
## Login   <bache_a@epitech.net>
## 
## Started on  Fri Oct 30 20:05:42 2015 Antoine Baché
## Last update Sun Nov  1 23:07:03 2015 Antoine Baché
##

SRC=	src/addinf.c \
	src/add_nbr.c \
	src/add_ope.c \
	src/add_ope_function.c \
	src/add_to_list.c \
	src/bistro.c \
	src/base_str.c \
	src/check_args.c \
	src/clear_zero.c \
	src/do_op.c \
	src/divinf.c \
	src/divinf_calc.c \
	src/free_token.c \
	src/is_in_str.c \
	src/lexer.c \
	src/main.c \
	src/modinf.c \
	src/multinf.c \
	src/my_error.c \
	src/my_getnbr.c \
	src/my_putchar.c \
	src/my_putchar_err.c \
	src/my_putstr.c \
	src/my_putstr_err.c \
	src/my_strcmp.c \
	src/my_strlen.c \
	src/my_strncpy.c \
	src/my_strndup.c \
	src/nb_length.c \
	src/ope_only_function.c \
	src/parser.c \
	src/prepare_list.c \
	src/rd_expr.c \
	src/subinf.c \
	src/tokenise.c

NAME=	calc

CC=	cc

RM=	rm -f

OBJ=	$(SRC:.c=.o)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all: 	$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
