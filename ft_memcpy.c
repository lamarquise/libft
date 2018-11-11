/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:03:45 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/09 16:34:36 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	a;
	unsigned char	*str;
	unsigned char	*tmp;

	a = 0;
	str = src;
	tmp = dst;
//	if (!(tmp = (unsigned char*)malloc(sizeof(char) * n)))
//		return (0);
	while (a < n)
	{
		tmp[a] = str[a];
		++a;
	}
	return (dst);
}
