/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:47:38 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/09 17:53:54 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		a;
	char	*ret;

	a = 0;
	if (!s1)
		return (0);
	while (s1[a])
		++a;
	if (!(ret = (char *)malloc(sizeof(char) * a)))
		return (0);
	a = 0;
	while (s1[a])
	{
		ret[a] = s1[a];
		++a;
	}
	ret[a] = '\0';
	return (ret);
}
