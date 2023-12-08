#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *temp_src;
    char *temp_dst;
    size_t i = 0;

    temp_src = (char *) src;
    temp_dst = (char *) dst;
    
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:53:17 by reldahli          #+#    #+#             */
/*   Updated: 2023/12/05 11:55:34 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * len);
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
