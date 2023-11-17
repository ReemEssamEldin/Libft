#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return(i);
}

int main()
{
    char s[] = "ReemEldahlish is Here!";
    printf("My function returns: %d\n", ft_strlen(s));
    printf("The Length is: %lu\n", strlen(s));
}