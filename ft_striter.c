/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:06:11 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/12 16:21:17 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int		a;

	a = 0;
	while (s[a])
	{
		f(&s[a]);				// i mean that could fix it but seems weird... although kinda makes sense...
		++a;			//this isn't going to work, i feel like this function is pourly explained/designed, whatevs
	}
}
