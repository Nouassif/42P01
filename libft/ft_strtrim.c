/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouassif <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:12:55 by nouassif          #+#    #+#             */
/*   Updated: 2021/11/19 18:46:35 by nouassif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	unsigned int	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && (ft_strchr(set, s1[start])))
		start++;
	end = ft_strlen(s1 + start);
	if (end)
		while (s1[end + start - 1] && (ft_strchr(set, s1[end + start - 1])))
			end--;
	str = malloc(sizeof(char) * end + 1);
	if (!str)
		return (NULL);
	ft_strncpy(str, s1 + start, end);
	str[end] = '\0';
	return (str);
}	
