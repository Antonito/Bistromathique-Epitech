##
## Makefile for Bistromathique in /Piscine_C_bistromathique/lib/my
## 
## Made by ludovic petrenko
## Login   <petren_l@epitech.net>
## 
## Started on  Mon Oct 12 10:01:59 2015 ludovic petrenko
## Last update Sun Nov  1 21:58:53 2015 Antoine Baché
##

SRC=	my_putchar.c \
	my_putchar_err.c \
	my_putstr.c \
	my_putstr_err.c \
	my_strlen.c \
	my_getnbr.c \
	my_strcpy.c \
	my_strncpy.c \
	my_strcmp.c \
	my_strncmp.c \
	my_strcat.c \
	my_strncat.c \

LIB=	libmy.a

HEADER=	my.h

CC=	cc

RM=	rm -f

OBJ=	$(SRC:.c=.o)

$(LIB):	$(OBJ)
	$(CC) -c $(SRC)
	ar rc $(LIB) $(OBJ)
	ranlib $(LIB)
	cp $(LIB) ..
	cp $(HEADER) ../../include

all: 	$(LIB)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(LIB)

re: 	fclean all

.PHONY: all clean fclean re
