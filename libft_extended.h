#ifndef LIBFT_EXTENDED_H
# define LIBFT_EXTENDED_H

# include <stdlib.h>
# include <unistd.h>

typedef struct         s_list
{
    void               *content;
    struct s_list      *next;
}                      t_list;

size_t      *ft_fusion_tab(int *tab1, int *tab2, size_t tablen1, size_t tablen2);
size_t      ft_len_occurence(char *str, char occurence);
size_t      ft_average_tab(int *tab, size_t size);
size_t      ft_sum_tab(int *tab, size_t size);
size_t      ft_strlen_libft(const char *s);
char        *ft_strrev(char *s);
void        ft_putnbr_base(int nbr, char *base);
void        ft_putchar(char c);
int         ft_tabchr(int *tab, int chr, int len);
int         ft_max_value_tab(int *tab, int size);
int         ft_min_value_tab(int *tab, int size);

#endif