/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:05:43 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/22 01:18:14 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_handle_char(va_list *ap, char **str, t_param *p)
{
	int		len;
	int		plen;
	int		wlen;

	if (!ap || !str || !p)
		return (-1);
	len = 1;
	plen = 0;
	if (p->flag & F_PREC && p->precision == 0)
		len = 0;
	if ((wlen = (p->width <= len ? 0 : p->width - len)))
	{
		if (p->flag & F_MINU)
		{
			plen = wlen;
			wlen = 0;
		}
	}
	else if (p->flag & F_SPAC)
		wlen = 1;
	if (!(*str = ft_fill_with(' ', len + wlen + plen)))
		return (-1);
	if (len)
		(*str)[wlen] = (char)va_arg(*ap, int);
	return (len + wlen + plen);
}

int		ft_handle_str(va_list *ap, char **str, t_param *p)
{
	int		len;

	if (!ap || !str || !p)
		return (-1);
	if (!ft_nstrdup(str, va_arg(*ap, char*)))
		return (-1);
	if (!*str)
	{
		if (!(*str = ft_fstrdup("(null)")))
			return (-1);
		p->flag |= (1 << 7);
	}
	len = ft_fstrlen(*str);
	if (!ft_gen_arg_str_s(p, str, &len))
		return (ft_scott_free(str, -1));
	return (len);
}

int		ft_str_has_wid(t_param *p, char **pre, char **str)
{
	char	c;

	if (!p || !pre || !str)
		return (0);
	c = ' ';
	if (!(p->flag & F_MINU))
	{
		if (p->flag & F_ZERO)
			c = '0';
		if (!(*pre = ft_fill_with(c, p->width))
			|| !(*str = ft_fstrjoin(pre, str)))
			return (0);
	}
	else if (!(*pre = ft_fill_with(c, p->width))
			|| !(*str = ft_fstrjoin(str, pre)))
		return (0);
	return (1);
}

int		ft_h_str_wid(t_param *p, char **str, int *len)
{
	char	*pre;

	if (!p || !str || !len)
		return (0);
	pre = NULL;
	p->width = (p->width <= *len ? 0 : p->width - *len);
	if (p->width)
	{
		if (!ft_str_has_wid(p, &pre, str))
			return (ft_scott_free(&pre, 0));
	}
	else if (p->flag & F_SPAC)
	{
		if (!(pre = ft_cstrjoin(' ', &pre))
			|| (*str = ft_fstrjoin(&pre, str)))
			return (ft_scott_free(&pre, 0));
		++*len;
	}
	*len += p->width;
	return (1);
}

int		ft_gen_arg_str_s(t_param *p, char **str, int *len)
{
	if (!p || !str)
		return (0);
	if (p->flag & F_PREC && !ft_h_str_prec(p, str, len))
		return (0);
	if (!ft_h_str_wid(p, str, len))
		return (0);
	return (1);
}
