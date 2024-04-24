#include "libft_extended.h"

void    ft_puttab(int *tab, size_t n)
{
    size_t     i;

    if (tab)
    {
        i = 0;
        while (i < n)
        {
            ft_putstr("array[");
            ft_putnbr_base(i, "0123456789");
            ft_putstr("] => ");
            ft_putnbr_base(tab[i], "0123456789");
            ft_putstr("\n");
            i++;
        }
    }
}