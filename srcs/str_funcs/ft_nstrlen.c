/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 20:53:21 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/26 03:55:36 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nstrlen(char *s, int ret)
{
	int		a;

	a = 0;
	if (!s)
		return (ret);
	while (s[a])
		++a;
	return (a);
}
