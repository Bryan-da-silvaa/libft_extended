#include "libft_extended.h"

size_t  ft_strlen_libft(const char *s)
{
    size_t     i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}