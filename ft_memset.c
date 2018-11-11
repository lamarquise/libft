/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:57:19 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/09 16:16:51 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int		a;
	unsigned char		*str;

	a = 0;
	str = b;
	while (a < len)
	{
		str[a] = (unsigned char)c;
		++a;
	}
	return (b);
}
