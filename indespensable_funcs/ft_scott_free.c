/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scott_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ericlazo <erlazo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 01:39:47 by ericlazo          #+#    #+#             */
/*   Updated: 2020/09/16 01:43:36 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

long	ft_scott_free(char **str, int ret)
{
	if (str && *str)
	{
		ft_bzero(*str, ft_fstrlen(*str));
		free(*str);
		*str = NULL;
	}
	return (ret);
}
