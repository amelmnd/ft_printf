# COLOR MAKEFILE
COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;36m
COLOUR_YELLOW = \033[0;93m
COLOUR_MAGENTA = \033[0;95m
END_COLOR=\033[0m

# VAR
DIRLIB		= ./libft/
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
	@make -C libft
	@echo "$(COLOUR_YELLOW)libft compil 🌿$(END_COLOR)"

#generer le fichier principale de l alib (.a)
$(NAME): libft
	@$(CC) $(CFLAGS) -c $(SRC) -I libft
	@echo "$(COLOUR_GREEN)printf compil 🍀$(END_COLOR)"
	@ar rc $(NAME) $(OBJ)
	@echo "$(COLOUR_GREEN)libftprintf.a 🍀$(END_COLOR)"

#compiler la lib (pour tester ou autre), necessite un main
compil:
	$(CC) $(CFLAGS) $(ORIGIN) $(SRC) -I libft -L libft -l ft -o $(EXEC)
	./$(EXEC)

#supprimer les fichier .o
clean:
	@cd ./libft && make clean
	@echo "$(COLOUR_YELLOW)libft clean 🐟$(END_COLOR)"
	@rm -rf $(NAME) $(EXEC)
	@echo "$(COLOUR_GREEN)ft_printf clean 🐟$(END_COLOR)"


#supprimer les fichier .a, .o et l'executable
fclean : clean
	@cd ./libft && make fclean
	@echo "$(COLOUR_YELLOW)libft fclean 🐳$(END_COLOR)"
	@rm -rf $(NAME) $(EXEC)
	@echo "$(COLOUR_GREEN)ft_printf fclean 🐳$(END_COLOR)"

re:fclean all
	@echo "$(COLOUR_YELLOW)libft re 🍋$(END_COLOR)"
	@echo "$(COLOUR_GREEN)ft_printf re 🍋$(END_COLOR)"

norme:
	norminette

test:
	francinette

#securisation du Makefile : indique au compilateurs les regles contenue dans le fichier
.PHONY: libft all clean fclean re norme test
