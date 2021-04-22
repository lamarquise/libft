/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:51:45 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/22 01:18:00 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_h_point_prec(char **str, t_param *p, int *len)
{
	char	*pre;
	size_t	plen;

	if (!str || !p || !len)
		return (0);
	pre = NULL;
	if (p->flag & F_PREC && p->precision == 0 && !ft_prec_is_zero(str, len))
		return (0);
	plen = (p->precision <= *len ? 0 : p->precision - *len);
	if (plen)
	{
		if (!(pre = ft_fill_with('0', plen))
		|| !(*str = ft_fstrjoin(&pre, str)))
			return (0);
	}
	return (1);
}

int			ft_h_point_wid(t_param *p, char **pre, char **str)
{
	if (!p || !pre || !str)
		return (0);
	if (p->flag & F_MINU)
	{
		if (!(*pre = ft_fill_with(' ', p->width))
		|| !(*str = ft_fstrjoin(str, pre)))
			return (0);
	}
	else
	{
		if (!(*pre = ft_fill_with(' ', p->width))
		|| !(*str = ft_fstrjoin(pre, str)))
			return (0);
	}
	return (1);
}

int			ft_handle_pointer(va_list *ap, char **str, t_param *p)
{
	char	*pre;
	int		len;

	if (!ap || !str || !p)
		return (-1);
	pre = NULL;
	if (!(*str = ft_to_base((long)va_arg(*ap, void*), "0123456789abcdef")))
		return (-1);
	len = ft_fstrlen(*str);
	if (!ft_h_point_prec(str, p, &len)
		|| !(pre = ft_fstrdup("0x"))
		|| !(*str = ft_fstrjoin(&pre, str)))
		return (ft_scott_free(&pre, -1));
	len = ft_fstrlen(*str);
	p->width = (p->width <= len ? 0 : p->width - len);
	if (p->width && !ft_h_point_wid(p, &pre, str))
		return (ft_scott_free(&pre, -1));
	return (ft_fstrlen(*str));
}
