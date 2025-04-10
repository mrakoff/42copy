CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
SRCS = ft_printf.c ft_printf_ft.c ft_put.c
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re