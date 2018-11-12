/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:37:05 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/12 15:43:59 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	a;
	char	*ret;

	a = 0;
	if (!(ret = (char*)malloc(sizeof(char) * size)))
		return (0);
	while (a < size)
	{
		ret[a] = '\0';
		++a;
	}
	return (ret);
}
