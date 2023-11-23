#include <stdio.h>
#include <string.h>

int main(void)
{
    char data[] = {'q', 'r', 's', 't', 'p', 'a', 'x'};
    char *pos = memchr(data, 'a', 4);
    if (pos == NULL)
    {
        printf("Character not found!\n");
    }
    else
    {
        printf("Pos[0] = %c\n", pos[0]);
        printf("Pos[1] = %c\n", pos[1]);
    }

    char str[] = "reem.essam.eldin@gmail.com";
    char *domain = memchr(str, '@', strlen(str));
    domain++;
    printf("domain: %s\n", domain);
    
    return(0);
}