NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_process_format.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putnbr_fd.c ft_putnbr_unsigned_fd.c ft_puthex_fd.c ft_putptr_fd.c
OBJ = $(SRC:.c=.o)
AR  = ar rc

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
