#include "libft_extended.h"

size_t     *ft_fusion_tab(int *tab1, int *tab2, size_t tablen1, size_t tablen2)
{
    size_t     *new_tab;
    size_t     i;
    size_t     j;

    if (!tab1 && !tab2)
        return (0);
    new_tab = malloc((tablen1 + tablen2 + 1) * sizeof(size_t));
    if (new_tab == NULL)
        return (0);
    i = 0;
    j = 0;
    while (i < tablen1)
        new_tab[j++] = tab1[i++];
    i = 0;
    while (i < tablen2)
        new_tab[j++] = tab2[i++];
    return (new_tab);
}