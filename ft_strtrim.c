/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:28:27 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/12 18:19:30 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		len(char *str)
{
	int		a;
	int		c;

	a = 0;
	c = 0;
	while (str[a] && (str[a] == ' ' || str[a] == '\n' || str[a] == '\t'))
		++a;
	while (str[a])
	{
		++c;
		++a;
	}
	--a;
	--c;
	while (str[a] && (str[a] == ' ' || str[a] == '\n' || str[a] == '\t'))
	{
		--a;
		--c;
	}
	return (c);
}

char	*ft_strtrim(char const *s)
{
	int		a;
	int		c;
	char	*ret;

	a = 0;
	c = 0;
	if (!(ret = (char*)malloc(sizeof(char) * (len((char*)s) + 1))))
		return (0);
	while (s[a] && (s[a] == ' ' || s[a] == '\n' || s[a] == '\t'))
		++a;
	while (s[a] && c < (len((char*)s) + 1))
	{
		ret[c] = s[a];
		++a;
		++c;
	}
	return (ret);
}
