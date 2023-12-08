/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:53:02 by reldahli          #+#    #+#             */
/*   Updated: 2023/12/05 11:47:14 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dst;
	size_t			i;

	temp_src = (unsigned char *)src;
	temp_dst = (unsigned char *)dst;
	if (temp_src == NULL && temp_dst == NULL)
		return (NULL);
	i = 0;
	while (temp_dst[i] != '\0' && i < n)
	{
		temp_dst[i] = temp_src[i];
		i++;
	}
	return (temp_dst);
}
