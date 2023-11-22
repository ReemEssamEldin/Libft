#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *temp_src;
    unsigned char *temp_dst;

    temp_src = (unsigned char *)src;
    temp_dst = (unsigned char *)dst;

    if (temp_src[i] == '\0' && temp_dst[i] == '\0')
        return(temp_dst);
    
    size_t i = 0;
    while (temp_dst[i] != '\0' && i < n)
    {
        temp_dst[i] = temp_src[i];
        i++;
    }
    return (temp_dst);
}