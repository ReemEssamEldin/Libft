/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:01:27 by reldahli          #+#    #+#             */
/*   Updated: 2023/12/05 13:10:23 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;
    
    if (!s)
        return (NULL);
    if ((size_t)start > ft_strlen(s))
        len = 0;
    if (len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    str = ft_calloc(len + 1, sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    return (str);
}


// int main(void)
// {
// char *s = ft_substr("hello",0,7);
// printf("%s",s);
// free(s);
// return (0);
// }