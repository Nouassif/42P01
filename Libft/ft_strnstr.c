/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouassif <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:42:36 by nouassif          #+#    #+#             */
/*   Updated: 2021/11/05 20:31:07 by nouassif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;

	if (!needle[0])
		return ((char*)haystack);
	while (i < len && haystack[i])
	{
		j= 0;
		while (haystack[i++] == needle[j++])
		{
			if (needle[j] == 0)
				return ((char *)haystack + (i - j));
		}
	i++;		
	}
	return (NULL);
}
