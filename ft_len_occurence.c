#include "libft_extended.h"

size_t     ft_len_occurence(char *str, char occurence)
{
    size_t     i;

    i = 0;
    if (str)
    {
        while (*str)
        {
            if (*str == occurence)
                i++;
            str++;
        }
        return (i);
    }
    return (0);
}