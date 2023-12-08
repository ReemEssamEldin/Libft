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

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while ((str[i] != '\0') && (i < len))
	{
		k = i;
		while (str[k] == to_find[j] && str[k] != '\0')
		{
			k++;
			j++;
		}
		if (to_find[j] == '\0')
		{
			return ((char *)&str[i]);
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}
