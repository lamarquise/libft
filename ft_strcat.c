/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:06:56 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/10 21:45:16 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		a;

	a = 0;
	while (s1[a])
		++a;
	while (*s2)
	{
		s1[a++] = *s2;
		++s2;
	}
	s1[a] = '\0';
	return (s1);
}
