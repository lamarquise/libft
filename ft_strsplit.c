/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:20:01 by erlazo            #+#    #+#             */
/*   Updated: 2019/05/29 19:18:17 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ws(char *str, char c)
{
	int		a;
	int		words;

	a = 0;
	words = 0;
	if (!str)
		return (1);
	while (str[a])
	{
		if (str[a] != c && (str[a + 1] == c || str[a + 1] == '\0'))
			++words;
		++a;
	}
	return (words + 1);
}

static int		word(char *str, int start, char c)
{
	int		a;

	a = 0;
	if (!str)
		return (0);
	while (str[start + a] && str[start + a] != c)
		++a;
	return (a);
}

char			**ft_strsplit(char const *s, char c)
{
	int		a;
	int		b;
	int		d;
	char	**ret;

	a = 0;
	b = 0;
	if (!(ret = (char**)malloc(sizeof(char*) * (ws((char*)s, c)))) || !s)
		return (0);
	while ((char)s[a])
	{
		if ((char)s[a] == c && (char)s[a])
			++a;
		else
		{
			d = 0;
			if (!(ret[b] = (char*)malloc(sizeof(char) * word((char*)s, a, c))))
				return (0);
			while ((char)s[a] != c && (char)s[a])
				ret[b][d++] = s[a++];
			ret[b++][d] = '\0';
		}
	}
	ret[b] = 0;
	return (ret);
}
