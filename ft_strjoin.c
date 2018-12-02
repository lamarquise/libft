/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:13:52 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/20 21:58:04 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		l(char *str)
{
	int		a;

	a = 0;
	while (str[a])
		++a;
	return ((a - 1) < 0 ? 0 : a - 1);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	char	*ret;

	a = 0;
	b = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(ret = (char*)ft_memalloc(sizeof(char) * l((char*)s1) + l((char*)s2) + 1)))
		return (0);
/*	if (!(ret = ft_memmove(ret, s1, l((char*)s1))))
		return (0);										//or is it NULL
	if (!(ret = 			// strlcat ???

*/			// hold up am i sure this is a useful modification???

	if (!(ret = ft_strcpy(ret, s1)))
		return (NULL);
	if (!(ret = ft_strcat(ret, s2)))
		return (NULL);
/*
	while (s1[a])
	{
		ret[a] = s1[a];
		++a;
	}
	while (s2[b])
	{
		ret[a] = s2[b];
		++a;
		++b;
	}
	ret[a] = '\0';
*/	return (ret);
}
