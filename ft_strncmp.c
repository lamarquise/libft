/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:59:35 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/11 18:08:37 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	a;

	a = 0;
	while ((char)s1[a] && (char)s2[a] && (char)s1[a] == (char)s2[a] && a < n)
		++a;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
