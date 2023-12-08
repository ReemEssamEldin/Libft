/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:58:57 by reldahli          #+#    #+#             */
/*   Updated: 2023/12/05 12:49:23 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t    src_len;
    src_len = ft_strlen(src);
    if (src_len + 1 < dstsize)
        ft_memcpy(dst, src, src_len + 1);
    else if (dstsize != 0)
    {
        ft_memcpy(dst, src, dstsize - 1);
        dst[dstsize - 1] = 0;
    }
	
    return (src_len);
}

// int main()
// {
// 	char src7[] = "coucou";
// 	char dest7[10]; 
// 	memset(dest7, 'A', 10);

// 	size_t n = ft_strlcpy(dest7, src7, -1) ;
// 	// strlen(src) && dest[0] == 'c' && dest[1] == 0  && dest[2] == 'A';
// 	printf("my strcpy %lu dest7[0] == %c  && dest7[1] == %c ====dest7[7] %c==== \n", n, dest7[0],dest7[1] , dest7[7] );
// 	// ft_strlcpy(dest, src, -1) == strlen(src) && !strcmp(src, dest) && dest[strlen(src) + 1] == 'A'; 
// 	printf("my strcpy dest is %s\n", dest7);


// 		char src0[] = "coucou";
// 	char dest0[10]; 
// 	memset(dest0, 'A', 10);
// 	n = strlcpy(dest0, src0, -1) ;
// 	printf("orig strcpy %lu dest0[0] == %c  && dest0[1] == %c ====dest0[7] %c ==== \n", n, dest0[0],dest0[1], dest0[7] );
// 	printf("orig strcpy dest is %s\n", dest0);
// 	// memset(dest, 'A', 10);
// }