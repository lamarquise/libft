/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 22:00:18 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/26 03:41:22 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// slightly modifying it to work better with GNL, like i did for Cub3D


int		ft_findchar(char *str, char c)
{
	int		i;

	// not doing the modif for now, will test again, specifically for printf...
//	if (!str)
//		return (-1);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		++i;
	}
	return (-1);
}
