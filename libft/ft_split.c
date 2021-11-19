/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouassif <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:33:52 by nouassif          #+#    #+#             */
/*   Updated: 2021/11/18 17:05:59 by nouassif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *str, char c)
{
	size_t	words;
	int		flag;

	flag = 0;
	words = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			words++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (words);
}

static char	*ft_cpywords(const char *str, size_t start, size_t end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = str[start++];
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	int		start;

	if (!s)
		return (NULL);
	split = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = -1;
	j = 0;
	start = -1;
	while (++i <= ((size_t)ft_strlen(s)))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ((size_t)ft_strlen(s))) && start >= 0)
		{
			split[j++] = ft_cpywords(s, start, i);
			start = -1;
		}
	}
	split[j] = 0;
	return (split);
}
