/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouassif <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 01:49:33 by nouassif          #+#    #+#             */
/*   Updated: 2021/11/06 17:51:56 by nouassif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;
	size_t dstlen;
	size_t i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;

	if(dstsize <= dstlen)
		return (dstsize + srclen);
	else
		ft_strncat(dst, src, dstsize - dstlen - 1);
		return (dstlen + srclen);
}
