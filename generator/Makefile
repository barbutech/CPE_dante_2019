##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make a file
##

SRC 	=	src/main.c			\
			src/my_getnbr.c		\
			src/cases.c 		\
			src/my_strcmp.c     \
			src/flags.c 		\
			src/operational_structures.c 	\

OBJ 	= 	$(SRC:.c=.o)

NAME	=	generator

CC = gcc -g3

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ)
		rm -rf maze.txt

test_run:
		$(CC) -o unit_test bonus/testcriterion.c $(SRC) -lcriterion
		./unit_test

fclean:		clean
		rm -rf $(NAME)

re:		fclean all
