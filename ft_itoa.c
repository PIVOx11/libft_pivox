#include "libft.h"

static int len_count(int nb)
{
    int len;

    len = 0;
    if (nb == 0)
    {
        len = 1;
    }
    if (nb < 0)
    {
        nb = -nb;
        len = 1;
    }
    while(nb != 0)
    {
        nb = nb / 10;
        len++;
    }
    return len;
}

char    *ft_itoa(int n)
{
    char    *str;
    int len;
    long nb;

    nb = n;
    len = len_count(nb);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
    {
        return NULL;
    }
    str[len] = '\0';
    if (nb == 0)
        str[0] = '0';
    if (n < 0)
    {
        nb = -nb;
        str[0] = '-';
    }
    while(nb > 0)
    {
        str[--len] = (nb % 10) + 48;
        nb= nb / 10;
    }
    return str;
}
