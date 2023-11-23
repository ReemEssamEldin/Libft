#include "libft.h"
void *ft_memchr(const void *str, char c, size_t size)
{
    size_t i;
    unsigned char *temp_str;
    unsigned char temp_c;

    i = 0;
    temp_str = (unsigned char *) str;
    temp_c = (unsigned char) c;

    
    while (i < size)
    {
        
        if (temp_str[i] == temp_c)
        {
            return((void *)&temp_str[i]);
        }
        i++;
    }
    return(NULL);
}