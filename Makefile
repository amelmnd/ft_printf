NAME = libftprintf.a
EXEC = prog
ORIGIN = main.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = printf.c
# nommage automatique des fichiers objets .o en fonction des noms de source .c
OBJ = $(SRC:.c=.o)

all: $(NAME)

#generer le fichier principale de l alib (.a)
$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

#compiler la lib (pour tester ou autre), necessite un main
compil:
	$(CC) $(CFLAGS) $(ORIGIN) $(SRC) -o $(EXEC)
	./$(EXEC)

#supprimer les fichier .o
clean:
	rm -rf *.o

#supprimer les fichier .a, .o et l'executable
fclean : clean
	rm -rf $(NAME) $(EXEC)

re: fclean all

norme:
	norminette

test:
	francinette

#securisation du Makefile : indique au compilateurs les regles contenue dans le fichier
.PHONY: all clean fclean re norme test
