NAME=libft_extended.a
CC=cc
CFLAGS= -Wall -Wextra -Werror
SRCS := ft_strlen_libft.c \
		ft_strrev.c \
		ft_len_occurence.c
		ft_average_tab.c \
		ft_sum_tab.c \
		ft_putchar.c \
		ft_putnbr_base.c \
		ft_max_value_tab.c \
		ft_min_value_tab.c \
		ft_fusion_tab.c \
		ft_tabchr.c

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