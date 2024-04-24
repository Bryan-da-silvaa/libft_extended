#include "libft_extended.h"

char    *ft_search_and_replace(char *str, char search, char replace)
{
    if (!str && !search && !replace)
        return ((void *)0);
    while (*str)
    {
        if (*str == search)
            *str = replace;
        str++;
    }
    return (str);
}