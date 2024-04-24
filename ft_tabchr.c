#include "libft_extended.h"

int     ft_tabchr(int *tab, int chr, int len)
{
    int     i;

    if (!tab)
        return (0);
    i = 0;
    while (i < len)
    {
        if (tab[i] == chr)
            return (tab[i]);
        i++;
    }
    return (0);
}