##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make a file
##

SRC 	=	src/main.c						\
			src/my_putchar.c				\
			src/my_putstr.c					\
			src/map.c						\
			src/find_way.c					\
			src/my_strlen.c 				\
			src/operational_structures.c 	\
			src/cases.c 					\

OBJ 	= 	$(SRC:.c=.o)

NAME	=	solver

CC = gcc -g3

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -Iinclude -o $(NAME) $(SRC) -g3

clean:
		rm -rf $(OBJ)

test_run:
		$(CC) -o unit_test bonus/testcriterion.c $(SRC) -lcriterion
		./unit_test

fclean:		clean
		rm -rf $(NAME)

re:		fclean all
