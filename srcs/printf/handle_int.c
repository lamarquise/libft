/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:56:08 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/22 01:17:38 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cast_d(va_list *ap, t_param *p, long long *num, int *neg)
{
	if (!ap || !p || !num || !neg)
		return (0);
	*neg = 0;
	if (p->size == 0 || p->size & C_H || p->size & C_HH)
		*num = va_arg(*ap, int);
	else if (p->size & C_L)
		*num = va_arg(*ap, long int);
	else if (p->size & C_LL)
		*num = va_arg(*ap, long long int);
	else if (p->size & C_J)
		*num = va_arg(*ap, intmax_t);
	else if (p->size & C_Z)
		*num = va_arg(*ap, size_t);
	if (*num < 0)
	{
		p->flag |= (1 << 2);
		*neg = -1;
		*num = -*num;
	}
	return (1);
}

int		ft_cast_u(va_list *ap, t_param *p, unsigned long long *num)
{
	if (!ap || !p || !num)
		return (0);
	if (p->size == 0)
		*num = va_arg(*ap, unsigned int);
	else if (p->size & C_H)
		*num = va_arg(*ap, int);
	else if (p->size & C_HH)
		*num = va_arg(*ap, int);
	else if (p->size & C_L)
		*num = va_arg(*ap, unsigned long);
	else if (p->size & C_LL)
		*num = va_arg(*ap, unsigned long long);
	else if (p->size & C_J)
		*num = va_arg(*ap, uintmax_t);
	else if (p->size & C_Z)
		*num = va_arg(*ap, size_t);
	return (1);
}

int		ft_handle_uint(va_list *ap, char **str, t_param *p)
{
	unsigned long long	n;

	if (!ap || !str || !p || !ft_cast_u(ap, p, &n))
		return (-1);
	if (n == 0 && p->flag & F_PREC && p->precision == 0)
	{
		if (!(*str = ft_fstrdup("")))
			return (-1);
	}
	else
	{
		if (p->spec == 'u' && !(*str = ft_pos_itoa(n)))
			return (-1);
		else if (p->spec == 'x' && !(*str = ft_to_base(n, "0123456789abcdef")))
			return (-1);
		else if (p->spec == 'X' && !(*str = ft_to_base(n, "0123456789ABCDEF")))
			return (-1);
		else if (p->spec == 'b' && !(*str = ft_to_base(n, "01")))
			return (-1);
		else if (p->spec == 'o' && !(*str = ft_to_base(n, "01234567")))
			return (-1);
	}
	if (!ft_gen_arg_str_i(p, str, ft_fstrlen(*str), 0))
		return (ft_scott_free(str, -1));
	return (ft_nstrlen(*str, -1));
}

int		ft_handle_int(va_list *ap, char **str, t_param *p)
{
	char		*base;
	long long	n;
	int			neg;

	if (!ap || !str || !p || !ft_cast_d(ap, p, &n, &neg))
		return (-1);
	base = NULL;
	if (n == 0 && p->flag & F_PREC && p->precision == 0)
	{
		if (!(*str = ft_fstrdup("")))
			return (-1);
	}
	else
	{
		if ((p->spec == 'd' || p->spec == 'i') && !(*str = ft_pos_itoa(n)))
			return (-1);
		else if (p->spec == 'B' && !(*str = ft_to_base(n, va_arg(*ap, char*))))
			return (-1);
	}
	if (!ft_gen_arg_str_i(p, str, ft_fstrlen(*str), neg))
		return (ft_scott_free(str, -1));
	return (ft_nstrlen(*str, -1));
}

int		ft_gen_arg_str_i(t_param *p, char **str, int len, int neg)
{
	char	*pre;

	if (!p || !str)
		return (0);
	pre = NULL;
	p->precision = (p->precision <= len ? 0 : p->precision - len);
	len += (p->flag & F_PLUS ? 1 : 0) + (p->flag & F_HASH);
	p->width = (p->width <= len ? 0 : p->width - len);
	if (p->precision && !(pre = ft_fill_with('0', p->precision)))
		return (0);
	if (p->flag & F_HASH && !ft_add_hash(&pre, p))
		return (ft_scott_free(&pre, 0));
	if (p->width > p->precision && !ft_h_int_wid(p, &pre, str, neg))
		return (ft_scott_free(&pre, 0));
	if (p->flag & F_PLUS && !(pre = ft_cstrjoin((neg < 0 ? '-' : '+'), &pre)))
		return (0);
	if (!(p->flag & F_PLUS) && p->flag & F_SPAC && p->width <= p->precision
		&& !(pre = ft_cstrjoin(' ', &pre)))
		return (ft_scott_free(&pre, 0));
	if (!(*str = ft_fstrjoin(&pre, str)))
		return (ft_scott_free(&pre, 0));
	return (1);
}
