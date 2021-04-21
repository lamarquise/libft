/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ericlazo <erlazo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:20:40 by ericlazo          #+#    #+#             */
/*   Updated: 2021/04/21 22:38:21 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fstrjoin(char **s1, char **s2)
{
	int		a;
	int		b;
	int		c;
	char	*ret;

	if (!*s1 && !*s2)
		return ((char*)(ft_scott_free(s1, 0) + ft_scott_free(s2, 0)));
	a = ft_strlen(*s1) + ft_strlen(*s2) + 1;
	if (!(ret = ft_memalloc(sizeof(char) * a)))
		return ((char*)(ft_scott_free(s1, 0) + ft_scott_free(s2, 0)));
	a = 0;
	b = 0;
	c = 0;
	while (*s1 && (*s1)[b])
		ret[a++] = (*s1)[b++];
	while (*s2 && (*s2)[c])
		ret[a++] = (*s2)[c++];
	ft_scott_free(s1, 0);
	ft_scott_free(s2, 0);
	return (ret);
}
