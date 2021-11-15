/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouassif <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:15:00 by nouassif          #+#    #+#             */
/*   Updated: 2021/11/15 01:00:39 by nouassif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char*	string;
	size_t i;
	size_t j;

	if (!s)
		return NULL;
	if(len > ((size_t)ft_strlen(s)))
		len = ft_strlen(s);
	string = ((char *)malloc(sizeof(char) * len + 1));
	if (!string)
		return NULL;
	if (start >= ((unsigned int)ft_strlen(s)))
		return (ft_strdup(""));
	i = 0;
	j = 0;
	while (start)
	{
		i++;
		start--;
	}
	while (j < len)
	{
		string[j] = s[i];
		j++;
		i++;
	}
	string[j] = '\0';
	return (string);
}
