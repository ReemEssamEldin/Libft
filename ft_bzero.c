#include "libft.h"

void ft_bzero(void *str, size_t n)
{
    char *tmp_ptr;
    tmp_ptr = (char *) str;
    
    while (n > 0)
    {
        *(tmp_ptr++) = 0;
        n--;
    }
}