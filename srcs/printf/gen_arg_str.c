/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_arg_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 17:20:16 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/22 01:17:27 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_add_hash(char **pre, t_param *p)
{
	char *mid;

	mid = NULL;
	if (!pre || !p)
		return (0);
	if (p->spec == 'x' && !(mid = ft_fstrdup("0x")))
		return (0);
	else if (p->spec == 'X' && !(mid = ft_fstrdup("0X")))
		return (0);
	else if (p->spec == 'o' && !(mid = ft_fstrdup("0")))
		return (0);
	else if (p->spec == 'b' && !(mid = ft_fstrdup("0b")))
		return (0);
	if (mid && !(*pre = ft_fstrjoin(&mid, pre)))
		return (0);
	return (1);
}

int		ft_h_int_space(t_param *p, char **pre)
{
	if (!p || !pre)
		return (0);
	if (p->flag & F_SPAC && !(p->flag & F_PLUS) && *pre)
		(*pre)[0] = ' ';
	else if (p->flag & F_SPAC && !(p->flag & F_PLUS))
		return (0);
	return (1);
}

int		ft_h_int_wid(t_param *p, char **pre, char **str, int neg)
{
	char	c;
	char	*post;

	if (!p || !pre || !str)
		return (0);
	c = ' ';
	post = NULL;
	if (p->flag & F_ZERO && !(p->flag & F_MINU) && !(p->flag & F_PREC))
		c = '0';
	if (!(post = ft_fill_with(c, p->width - p->precision)))
		return (0);
	if (!(p->flag & F_MINU))
	{
		if (c != '0' && p->flag & F_PLUS)
		{
			if (!(*pre = ft_cstrjoin((neg < 0 ? '-' : '+'), pre)))
				return (ft_scott_free(&post, 0));
			p->flag &= (0 << 2);
		}
		if (!(*pre = ft_fstrjoin(&post, pre)))
			return (0);
	}
	else if (!(*str = ft_fstrjoin(str, &post)))
		return (0);
	return (ft_h_int_space(p, pre));
}

int		ft_prec_is_zero(char **str, int *len)
{
	if (!str || !len)
		return (0);
	ft_scott_free(str, 0);
	if (!(*str = ft_fstrdup("")))
		return (0);
	*len = 0;
	return (1);
}

int		ft_h_str_prec(t_param *p, char **str, int *len)
{
	int		n;
	char	*pre;

	if (!p || !str || !len)
		return (0);
	pre = NULL;
	if (p->precision == 0 && !ft_prec_is_zero(str, len))
		return (0);
	else if ((n = (p->precision < *len ? p->precision : 0)) > 0)
	{
		if (!(pre = ft_substr(*str, 0, n)))
			return (0);
		ft_scott_free(str, 0);
		*str = pre;
		*len = n;
	}
	return (1);
}
