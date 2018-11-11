/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:00:28 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/09 18:05:42 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int		a;
	
	a = 0;
	if (!src)
		return (0);
	while (src[a] && a < len)
	{
		dst[a] = src[a];
		++a;
	}
	dst[a] = '\0';
	return (dst);
}
