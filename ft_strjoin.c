/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:13:52 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/12 17:28:16 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		l(char *str)
{
	int		a;

	a = 0;
	while (str[a])
		++a;
	return (a);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	char	*ret;

	a = 0;
	b = 0;
	if (!(ret = (char*)malloc(sizeof(char) * l((char*)s1) + l((char*)s2) - 1)))
		return (0);
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
	return (ret);
}
