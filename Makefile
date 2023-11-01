NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_printf.c ft_type_choose.c ft_putchar_c.c ft_puthexa.c ft_strlcpy.c ft_putpointer.c ft_putnbr.c ft_putstr_c.c ft_putunsnbr.c ft_strlen.c

MY_OBJECTS = $(SOURCES:.c=.o)

all:	$(NAME)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

clean:
	rm -f $(MY_OBJECTS)
	rm -f $(MY_BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re