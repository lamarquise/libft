/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 22:14:58 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/11 16:50:05 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dst[a])
		++a;
	while (b <= size)
	{
		if (src[b] && b < size)
			dst[a + b] = src[b];
		else
			dst[a + b] = '\0';
		++b;
	}
	return (a + b);
}
