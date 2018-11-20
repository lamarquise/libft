/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:38:00 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/14 15:38:20 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	a;
	unsigned char	*tmp;

	a = 0;
	tmp = (unsigned char*)s;
	while (a < n)
	{
		if ((unsigned char)c == tmp[a])
			return (&tmp[a]);
		++a;
	}
	return (0);
}
