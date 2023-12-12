/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:00:20 by reldahli          #+#    #+#             */
/*   Updated: 2023/12/05 12:58:31 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t count;
	int result;

	count = 0;
	result = ft_strncmp(s1, s2, n);
	if (!*s2)
		return ((char *)s1);
	if (ft_strlen(s1) < ft_strlen(s2) || n == 0)
		return (NULL);
	if (result == 0)
		return ((char *)s1);
	while (result != 0 && count < n && n - count >= ft_strlen(s2))
	{
		result = ft_strncmp((char *)s1 + count, s2, ft_strlen(s2));
		if (result == 0)
			return ((char *)s1 + count);
		count++;
	}
	return (NULL);
}