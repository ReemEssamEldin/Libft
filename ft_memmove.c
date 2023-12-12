#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *temp_src;
    char    *temp_dst;

    temp_src = (char *)src;
    temp_dst = (char *)dst;

    // Check for NULL pointers if necessary
    if (temp_src == NULL || temp_dst == NULL)
        return (NULL);

    // Check for overlap and select the appropriate copy direction
    if (temp_dst < temp_src || temp_dst >= (temp_src + len))
    {
        // No overlap, copy from start to end
        size_t  i;

        i = 0;
        while (i < len)
        {
            temp_dst[i] = temp_src[i];
            i++;
        }
    }
    else
    {
        // There is overlap, copy from end to start to avoid overwriting
        size_t j;

        j = len - 1;
        while (j < len)
        {
            temp_dst[j] = temp_src[j];
            j--;
        }
    }
    return (dst);
}
