#include <stdio.h>
#include <string.h>
#include <signal.h>

int ft_strlcpy(char *dest, char *src, int n)
{
    int i;
    int j;

    i = 0;
    j = 0;

    // TODO: Check errors
    while (dest[i] != '\0' && dest[i] <= n)
    {
        dest[i] = src[i];
        i++;
    }
    while (src[j] != '\0')
    {
        j++;
    }
    return (j);
}

int main()
{
    char s[] = "HelloWorld";
    char d[] = "ReemEldahlish";
    printf("The source is: %s\n", s);
    printf("The destination is: %s\n", d);
    printf("\nThe result is: %lu\n", strlcpy(d, s, 6));
    printf("The source is: %s\n", s);
    printf("The destination is: %s\n", d);
    printf("\nMY FUNCTION The result is: %d\n", ft_strlcpy(d, s, 6));
    printf("MY FUNCTION The source is: %s\n", s);
    printf("MY FUNCTION The destination is: %s\n", d);
    return (0);
}