/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:52:32 by erlazo            #+#    #+#             */
/*   Updated: 2018/11/14 16:18:54 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)			// yea it does look stupid, but not sure how to fix or change...
{
	int		a;

	a = 0;
	if (!s)
		return ;
	while (s[a])
	{
		if (s[a + 1])
		{
			++a;
			s[a - 1] = '\0';
		}
		else
		{
			s[a] = '\0';
			++a;
		}
	}
}