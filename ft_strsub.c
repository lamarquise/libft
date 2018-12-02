/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:04:32 by erlazo            #+#    #+#             */
/*   Updated: 2018/12/02 21:46:55 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	a;
	char			*ret;

	a = 0;
	if (!s)
		return (0);				// or NULL ???
	if (!(ret = (char*)malloc(sizeof(char) * (len + 1))))			// memalloc ????
		return (0);
	while (a < len)
	{
		ret[a] = (char)s[start + a];
		++a;
	}
	ret[a] = '\0';
	return (ret);
}
