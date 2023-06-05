# COLOR MAKEFILE
COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;34m
END_COLOR=\033[0m

# VAR
NAME = libftprintf.a
LIB = libft.a
EXEC = prog
ORIGIN = main.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c

# nommage automatique des fichiers objets .o en fonction des noms de source .c
OBJ = $(SRC:.c=.o)

all: $(NAME)

libft:
	@make -C libft_all
	@echo "$(COLOUR_GREEN)libft compil 🟢$(END_COLOR)"

#generer le fichier principale de l alib (.a)
$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) -I libft
	@echo "$(COLOUR_GREEN)printf compil 🟢$(END_COLOR)"
	ar rc $(NAME) $(OBJ)
	@echo "$(COLOUR_GREEN)libftprintf.a 🟢$(END_COLOR)"

#compiler la lib (pour tester ou autre), necessite un main
compil:
	$(CC) $(CFLAGS) $(ORIGIN) -I libft -L libft_all -l ft -o $(EXEC)
	./$(EXEC)

#supprimer les fichier .o
clean:
	cd ./libft_all && make clean
	@echo "$(COLOUR_BLUE)libft clean 🔵$(END_COLOR)"
	rm -rf *.o
	@echo "$(COLOUR_BLUE)ft_printf clean 🔵$(END_COLOR)"

#supprimer les fichier .a, .o et l'executable
fclean : clean
	cd ./libft_all && make fclean
	@echo "$(COLOUR_BLUE)libft fclean 🔵$(END_COLOR)"
	rm -rf $(NAME) $(EXEC)
	@echo "$(COLOUR_BLUE)ft_printf fclean 🔵$(END_COLOR)"

re:fclean all
	@echo "$(COLOUR_BLUE)libft re 🔵$(END_COLOR)"
	@echo "$(COLOUR_BLUE)ft_printf re 🔵$(END_COLOR)"

norme:
	norminette

test:
	francinette

#securisation du Makefile : indique au compilateurs les regles contenue dans le fichier
.PHONY: libft all clean fclean re norme test
