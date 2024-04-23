#include "libft_extended.h"

size_t     ft_average_tab(int *tab, size_t size)
{
    size_t  i;
    size_t  result;

    if (!tab)
        return (0);
    i = 0;
    result = 0;
    while (i < size)
    {
        result += tab[i];
        i++;
    }
    return (result / i);
}