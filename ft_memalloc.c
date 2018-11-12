/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 20:00:47 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/12 15:22:43 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned int	a;
	char			*ret;

	a = 1;
	if (!(ret = (char*)malloc(sizeof(void) * size)))
		return (0);
	ret[0] = 'a';
	while (a < size)
	{
		ret[a] = '\0';
		++a;
	}
	return ((void*)ret);
}
