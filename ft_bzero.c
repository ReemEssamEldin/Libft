#include <stdio.h>
#include <strings.h>

void ft_bzero(void *str, size_t n)
{
    unsigned char *tmp_ptr;
    tmp_ptr = (unsigned char *) str;
    
    while (n > 0)
    {
        *(tmp_ptr++) = 0;
        n--;
    }
}
int main ()
{
    char buffer[10];
    ft_bzero(buffer, 10);

    int i = 0;
    while (i < 10)
    {
        printf("%c", buffer[i]);
        i++;
    }
    return(0);
}