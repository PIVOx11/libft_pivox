#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    const unsigned char *src1;
    unsigned char *dest1;
    size_t i;

    i = 0;
    src1 = (const unsigned char *) src;
    dest1 = (unsigned char *)dest;
    while(i < n)
    {
        dest1[i] = src1[i];
        i++;
    }
    return dest;
}