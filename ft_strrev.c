#include "libft_extended.h"

char    *ft_strrev(char *s)
{
    size_t          i;
    size_t          len_s;
    char            tmp;

    if (s == NULL)
        return (NULL);
    i = 0;
    len_s = ft_strlen_libft(s);
    while (s[i] != '\0' && i < len_s / 2)
    {
        tmp = s[i];
        s[i] = s[len_s - i - 1];
        s[len_s - i - 1] = tmp;
        i++;
    }
    return (s);
}