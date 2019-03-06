/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:13:52 by erlazo            #+#    #+#             */
/*   Updated: 2019/03/06 17:09:59 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		l(char *str)
{
	int		a;

	a = 0;
	while (str[a])
		++a;
	return ((a == 0) ? 0 : a);
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
	if (!(ret = (char*)ft_memalloc(sizeof(char)
		* l((char*)s1) + l((char*)s2) + 1)))
		return (0);
	if (!(ret = ft_strdup(s1)))
		return (NULL);
	if (!(ret = ft_strcat(ret, s2)))
		return (NULL);
	return (ret);
}
