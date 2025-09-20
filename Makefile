CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_strlen.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c \
	  ft_isprint.c ft_itoa.c ft_putchar.c ft_strlen.c ft_tolower.c \
	  ft_toupper.c 
OBGS = $(SRC:.c=.o)

NAME = libft.a

all: $(NAME)
# Build library.
$(NAME): $(OBGS)
	ar rcs $(NAME) $(OBGS)
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

#Clean rules
clean:
	rm -f $(OBGS)
fclean: clean
	rm -f $(NAME)

#rebuld my library
re: fclean all

#Test ruls
test: all
	$(CC) $(CFLAGS) main.c libft.a -I. -o test
	./test