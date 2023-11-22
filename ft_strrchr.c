#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    unsigned int i;
    char temp_c;
    char *res;

    i = 0;
    temp_c = (char) c;
    res = NULL;

    while (s[i] != '\0')
    {
        if (s[i] == temp_c)
        {
            res = (char *)&s[i];
        }
        i++;
    }
    if (s[i] == c)
    {
        res = (char *)&s[i];
    }
    return(res);
}