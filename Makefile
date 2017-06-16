##
## Makefile for palindrome in /home/benoit.pingris/delivery/ADM_palindrome_2016
## 
## Made by benoit pingris
## Login   <benoit.pingris@epitech.net>
## 
## Started on  Thu Jun 15 09:34:43 2017 benoit pingris
## Last update Fri Jun 16 15:46:15 2017 benoit pingris
##

CC	=	gcc

NAME	=	palindrome

SRC	=	srcs/main.c		\
		srcs/set.c		\
		srcs/get_info.c		\
		srcs/err_cmd.c		\
		srcs/useful/calc_base.c	\
		srcs/pal.c		\
		srcs/ptr_fc.c		\
		srcs/search_pal.c	\
		srcs/useful/showtab.c	\
		srcs/useful/itoa.c	\
		srcs/useful/free.c	\
		srcs/useful/disp.c	\
		srcs/useful/revnb.c	\
		srcs/gnl/gnl.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I./include -Wall -Wextra

RM	=	rm -f

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean	:
		$(RM) $(OBJ)

fclean	:	clean

		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re

