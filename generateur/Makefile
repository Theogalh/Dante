##
## Makefile for  in /home/partou_a/rendu/PSU_2015_minishell1
## 
## Made by Robin Partouche
## Login   <partou_a@epitech.net>
## 
## Started on  Mon Jan  4 13:38:11 2016 Robin Partouche
## Last update Sat May  7 05:26:03 2016 Robin Partouche
##

CC	=	gcc

SRC	=	src/main.c \
		src/perfect_maze.c \
		src/imperfect_maze.c \
		src/tools.c \
		src/map.c \

NAME	= 	generateur

LIBMAKED=	../lib/my/libmy.a

LIBROAD	=	-L../lib/

LIB	=	-lmy

OBJ	=	$(SRC:.c=.o)

LIBMAKE	=	../lib/my

CFLAGS	=	-c -I./include/ -g -W -Wall -Wextra -ansi -pedantic -O2

LDFLAGS =

all: $(LIBMAKED) $(NAME)

$(LIBMAKED):
	make -C $(LIBMAKE)

$(NAME):$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIBROAD) $(LIB)

clean:
	rm -f $(OBJ) && \
	make -C $(LIBMAKE) clean

fclean: clean
	rm -f $(NAME) && \
	rm -f $(LIBMAKED)

re: fclean all

.PHONY: all clean fclean re
