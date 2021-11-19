/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouassif <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:15:00 by nouassif          #+#    #+#             */
/*   Updated: 2021/11/19 18:48:45 by nouassif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ((unsigned int)ft_strlen(s)))
		return (ft_strdup(""));
	i = ft_strlen(s) - start;
	if (len > i)
		len = i;
	else if (i < 0)
		i = 0;
	else if (len < i)
		i = len;
	string = ((char *)malloc(sizeof(char) * len + 1));
	if (!string)
		return (NULL);
	ft_strlcpy(string, s + start, i + 1);
	return (string);
}
