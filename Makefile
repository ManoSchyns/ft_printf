NAME = libftprintf.a
SRC = ft_printf.c sources/ft_printf_parsing.c sources/ft_printf_char.c sources/ft_printf_string.c  sources/ft_printf_decimal.c sources/ft_printf_hexa.c sources/ft_printf_pointeur.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror -Iheaders

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	cc -c $(FLAGS) $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all