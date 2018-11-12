/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:04:32 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/12 17:13:24 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	a;
	char			*ret;

	a = 0;
	if (!(ret = (char*)malloc(sizeof(char) * (len + 1))))			// len + 1 ???
		return (0);
	while (a < len)
	{
		ret[a] = (char)s[start + a];
		++a;
	}
	ret[a] = '\0';
	return (ret);
}
