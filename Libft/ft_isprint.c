/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouassif <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:51:34 by nouassif          #+#    #+#             */
/*   Updated: 2021/10/26 18:10:18 by nouassif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isprint(int c)
{
	while (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(int arc, char **arv)
{
	(void) arc;
	printf("%d", ft_isprint(*arv[1]));
}*/
