##
## Makefile for Bistromathique in /Piscine_C_bistromathique/lib/my
## 
## Made by ludovic petrenko
## Login   <petren_l@epitech.net>
## 
## Started on  Mon Oct 12 10:01:59 2015 ludovic petrenko
## Last update Fri Oct 30 20:08:33 2015 Antoine Baché
##

SRC=	my_putchar.c \
	my_putchar_err.c \
	my_isneg.c \
	my_put_nbr.c \
	my_put_nbr_err.c \
	my_swap.c \
	my_putstr.c \
	my_putstr_err.c \
	my_strlen.c \
	my_getnbr.c \
	my_sort_int_tab.c \
	my_power_rec.c \
	my_square_root.c \
	my_is_prime.c \
	my_find_prime_sup.c \
	my_strcpy.c \
	my_strncpy.c \
	my_revstr.c \
	my_strstr.c \
	my_strcmp.c \
	my_strncmp.c \
	my_strupcase.c \
	my_strlowcase.c \
	my_strcapitalize.c \
	my_str_isalpha.c \
	my_str_isnum.c \
	my_str_islower.c \
	my_str_isupper.c \
	my_str_isprintable.c \
	my_showstr.c \
	my_showmem.c \
	my_strcat.c \
	my_strncat.c \
	my_str_swap.c

LIB=	libmy.a

HEADER=	my.h

CC=	cc

RM=	rm -f

OBJ=	$(SRC:.c=.o)

all: 	$(LIB)

$(LIB):	$(OBJ)
	$(CC) -c $(SRC)
	ar rc $(LIB) $(OBJ)
	ranlib $(LIB)
	cp $(LIB) ..
	cp $(HEADER) ../../include

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(LIB)

re: 	fclean all

.PHONY: all clean fclean re
