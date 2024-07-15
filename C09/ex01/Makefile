MY_SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c

MY_OBJECTS = ${MY_SOURCES:.c=.o}

CC = cc

CFLAGS = -Wall -Werror -Wextra

INCLUDE = includes

NAME = libft.a

all:$(NAME)

$(NAME): $(MY_OBJECTS)
	ar rc $(NAME) $(MY_OBJECTS)
	ranlib $(NAME)

%.o: /%.c $(INCLUDE)/ft.h
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rf -f $(NAME)

re: fclean all
