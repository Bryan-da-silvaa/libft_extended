#include "libft_extended.h"

int    ft_min_value_tab(int *tab, int size)
{
    int     max;
    int     i;

    if (tab)
    {
        max = 0;
        i = 0;
        while (i < size)
        {
            if (max > tab[i] || i == 0)
                max = tab[i];
            i++;
        }
        return (max);
    }
    return (0);
}