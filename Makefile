NAME = libft.a

SRC = ft_strlen.c ft_putchar_fd.c ft_putbin.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -O3

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
