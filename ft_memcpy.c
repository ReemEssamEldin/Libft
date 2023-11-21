#include <string.h>
#include <stdio.h>

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

int main()
{
    char src[] = "HelloWorld!";
    char dst[] = "12345";
    memcpy(dst, src, 4);

    printf("%s\n", dst);

    char src1[] = "HelloWorld!";
    char dst1[] = "12345";
    ft_memcpy(dst1, src1, 4);

    printf("My function: %s", dst1);

    return (0);
}