/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 14:48:29 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/22 01:16:50 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_base_check(char *base)
{
	int		i;
	int		ret;

	ret = 0;
	if (!base)
		return (-1);
	while (base[ret])
	{
		if (base[ret] < 33 || base[ret] > 126)
			return (-1);
		i = ret + 1;
		while (base[i])
		{
			if (base[ret] == base[i])
				return (-1);
			++i;
		}
		++ret;
	}
	return (ret > 1 ? ret : -1);
}

char		*ft_to_base(unsigned long long nb, char *base)
{
	int		pos;
	int		size;
	char	*ret;
	char	buf[64];

	if ((size = ft_base_check(base)) == -1)
		return (NULL);
	buf[63] = '\0';
	pos = 62;
	ret = NULL;
	while (nb >= (unsigned int)size)
	{
		buf[pos--] = base[nb % size];
		nb /= size;
	}
	buf[pos] = base[nb % size];
	if (!(ret = ft_fstrdup(&buf[pos])))
		return (NULL);
	return (ret);
}
