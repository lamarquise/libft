/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 17:29:04 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/22 01:17:19 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_fdprintf(int fd, const char *format, ...)
{
	int			ret;
	va_list		ap;
	t_pfelem	*lst;

	if (!format)
		return (-1);
	lst = NULL;
	va_start(ap, format);
	if ((ret = ft_parsing_hq((char*)format, &ap, &lst)) == 1)
		ret = ft_display_del(fd, &lst);
	if (ret == -1)
		ret = ft_pflist_del_all(&lst);
	va_end(ap);
	return (ret);
}

int		ft_printf(const char *format, ...)
{
	int			ret;
	va_list		ap;
	t_pfelem	*lst;

	if (!format)
		return (-1);
	lst = NULL;
	va_start(ap, format);
	if ((ret = ft_parsing_hq((char*)format, &ap, &lst)) == 1)
		ret = ft_display_del(1, &lst);
	if (ret == -1)
		ret = ft_pflist_del_all(&lst);
	va_end(ap);
	return (ret);
}
