/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:43:16 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/11 17:52:56 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	if (!needle)
		return ((char*)haystack);
	else if (!haystack)
		return (0);
	while ((char)haystack[a] && a < len)
	{
		if ((char)haystack[a] == (char)needle[b] && (char)needle[b])
			++b;
		else if ((char)haystack[a] != (char)needle[b] && (char)needle[b])
		{
			a = a - b;
			b = 0;
		}
		else
			return ((char*)&haystack[a - b]);
		++a;
	}
	return (0);
}
