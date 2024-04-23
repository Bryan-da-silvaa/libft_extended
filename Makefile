NAME=libft_extended.a
CC=cc
CFLAGS= -Wall -Wextra -Werror
SRCS :=

OBJ= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	ar -rc $@ $^

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re