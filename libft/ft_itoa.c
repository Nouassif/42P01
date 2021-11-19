/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouassif <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:39:20 by nouassif          #+#    #+#             */
/*   Updated: 2021/11/19 18:21:20 by nouassif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	size_t	nbr;

	len = ft_intlen(n);
	str = ft_calloc(len + 1, 1);
	if (!str)
		return (0);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		nbr = (size_t) n * -1;
		str[0] = '-';
	}
	else
		nbr = n;
	while (nbr > 0)
	{
		str[--len] = '0' + (nbr % 10);
		nbr /= 10;
	}
	return (str);
}
