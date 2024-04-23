#ifndef LIBFT_EXTENDED_H
# define LIBFT_EXTENDED_H

# include <stdlib.h>

typedef struct         s_list
{
    void               *content;
    struct s_list      *next;
}                      t_list;

size_t  ft_strlen_libft(const char *s);

#endif