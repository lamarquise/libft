/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:34:49 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/19 17:46:33 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			a;
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	if ((int)dst - (int)src < 0)
	{
		a = -1;
		while (++a < len)
			dst2[a] = src2[a];
	}
	else
	{
		a = len;
		while (a-- > 0)
			dst2[a] = src2[a];
	}
	return (dst);
}
