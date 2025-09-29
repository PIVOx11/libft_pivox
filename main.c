#include "libft.h"
#include <stdio.h>

int main()
{
    char str[10];
    char src[] = "hello btc";

    ft_memcpy(str,src,4);
    str[4] = '\0';

    printf("%s\n",str);

}