/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 22:19:52 by erlazo            #+#    #+#             */
/*   Updated: 2020/09/09 22:29:16 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		a;
	char	*tmp;

	tmp = (char*)s;
	a = 0;
	while (tmp[a] || (tmp[a] == '\0' && (char)c == '\0'))
	{
		if (tmp[a] == (char)c)
			return (&tmp[a]);
		++a;
	}
	return (NULL);
}
