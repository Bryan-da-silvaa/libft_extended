#include "libft_extended.h"

#include <stdio.h>

int     main(void)
{
    int     tab[10] = {19, 68, 36, 256, 3087, 426, 498, 253, 374, 0};

    printf("max int tab : %d\n", ft_min_value_tab(tab, 10));
}