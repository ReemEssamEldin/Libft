#include <string.h>
#include <stdio.h>

int *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *temp_src;
    unsigned char *temp_dst;
    size_t i = 0;

    temp_src = (unsigned char *) src;
    temp_dst = (unsigned char *) dst;
    
    if (*temp_src == '\0' && *temp_dst == '\0')
        return(NULL);

    if (temp_dst[i] > temp_src[i])
    {
        while (len > 0)
        {
            temp_dst[len] = temp_src[len];
            len--;
        }
    }
    else
    {
        while (i < len)
        {
            temp_dst[i] = temp_src[i];
            i++;
        }
        
    }
    return(dst);  
}

int main()
{
    char src[] = "HelloWorld!";
    char dst[] = "12345";
    memmove(dst, src, 6);

    printf("%s\n", dst);
    char src1[] = "HelloWorld!";
    char dst1[] = "12345";
    memmove(dst1, src1, 6);

    printf("My function: %s\n", dst1);
    return(0);
}