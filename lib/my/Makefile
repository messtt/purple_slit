##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## make library
##

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
TARGET = libmy.a

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rsc libmy.a $(OBJ)
clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_MAIN)

fclean: clean
	rm -rf $(TARGET)
	rm -rf $(OBJ:.o=.gcda)
	rm -rf $(OBJ:.o=.gcno)

re: fclean all
