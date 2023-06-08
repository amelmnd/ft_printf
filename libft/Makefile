NAME = libft.a
EXEC = prog
ORIGIN = main.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_strlen.c ft_tolower.c ft_toupper.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_strchr.c ft_strnstr.c ft_atoi.c ft_strrchr.c ft_memset.c ft_bzero.c  ft_memcpy.c  ft_calloc.c ft_strdup.c ft_substr.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_striteri.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_strmapi.c ft_strjoin.c ft_itoa.c ft_strtrim.c ft_split.c
# automatic naming of object files according to C source names
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)

compil:
	@$(CC) $(CFLAGS) $(ORIGIN) $(SRC) -o $(EXEC)
	@./$(EXEC)

clean:
	@rm -rf *.o

fclean : clean
	@rm -rf $(NAME) $(EXEC)

re: fclean all

.PHONY: all clean fclean re
