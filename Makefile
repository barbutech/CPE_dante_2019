##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make a file
##

all:
		make -C generator/ re
		make -C solver/	re

clean:	fclean

fclean:
		make -C generator/ clean
		make -C solver/	clean

re:		fclean all
