#include "libft.h"
#include <stdio.h>

int main()
{
    char str[] = "dady is home dc";
    ft_memset(str,67,5);
    printf("%s\n",str);

    char dest[10];
    ft_strcpy(dest, "hello btc");
        printf("%s\n",dest);

}