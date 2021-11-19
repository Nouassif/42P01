/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouassif <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:33:53 by nouassif          #+#    #+#             */
/*   Updated: 2021/11/19 18:06:30 by nouassif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(sizeof(unsigned char) * (count * size));
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, size * count);
	return (p);
}
