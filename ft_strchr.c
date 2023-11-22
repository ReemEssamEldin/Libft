#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    size_t i;
    char temp_c;

    i = 0;
    temp_c = (char) c;

    while (s[i] != '\0')
    {
        if (s[i] == temp_c)
        {
            return((char *)&s[i]);
        }
        i++;
    }
    if (s[i] == temp_c)
    {
        return((char *)&s[i]);
    }
    return(NULL);
}