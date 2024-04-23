#include    "libft_extended.h"

static int     check_base(char *base)
{
    int     i;
    int     c;

    if (!base)
        return (0);
    if (ft_strlen_libft(base) == 1)
        return (0);
    i = 0;
    c = 1;
    while (base[i])
    {
        if (base[i] == '-' || base[i] == '+')
            return (0);
        if (base[i] < 32 || base[i] > 126)
            return (0);
        while (base[c])
        {
            if (base[i] == base[c])
                return (0);
            c++;
        }
        i++;
        c = i + 1;
    }
    return (1);
}

static int     base_len(char *base)
{
    int     i;

    if (check_base(base) == 0)
        return (0);
    i = 0;
    while (base[i] != '\0')
        i++;
    return (i);
}

void    ft_putnbr_base(int nbr, char *base)
{
    unsigned int    n;
    int     len_base;

    n = nbr;
    len_base = base_len(base);
    if (len_base >= 2)
    {
        if (nbr < 0)
        {
            write(1, "-", 1);
            n = -nbr;
        }
        if (n > (unsigned int)len_base)
            ft_putnbr_base(n / len_base, base);
        ft_putchar(base[n % len_base]);
    }
}