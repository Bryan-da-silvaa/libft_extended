#include "libft_extended.h"

int     *ft_tabcpy(int *tab, size_t len)
{
    int     *tabcpy;
    size_t     i;

    if (!tab)
        return (0);
    tabcpy = malloc((len) * sizeof(int));
    if (tabcpy == NULL)
        return (0);
    i = 0;
    while (i < len)
    {
        tabcpy[i] = tab[i];
        i++;
    }
    return (tabcpy);
}