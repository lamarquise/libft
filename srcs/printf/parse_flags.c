/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 16:25:48 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/22 01:18:36 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_flag_parsing(char *format, t_param *p, va_list *ap)
{
	int		i;
	int		prev;
	int		ret;

	if (!format || !p || !ap)
		return (-8);
	prev = 0;
	ret = 0;
	while ((i = ft_findchar("0#+- .123456789*hljz", format[ret])) >= 0)
	{
		if ((prev >= 5 && (i < 5 && i > 0)) || (prev >= 16 && i < 16))
			return (-8);
		if (i <= 4 && ++ret)
			p->flag |= (1 << i);
		else if (i == 5)
			ret += ft_get_precision(&format[ret], p, ap);
		else if (i <= 15)
			ret += ft_get_width(&format[ret], p, ap);
		else
			ret += ft_get_size(&format[ret], p);
		if (ret < 1)
			return (-8);
		prev = i;
	}
	return (ret);
}

int		ft_get_precision(char *format, t_param *p, va_list *ap)
{
	int		psize;
	int		rlen;

	if (!format || !p || !ap)
		return (-20);
	rlen = 0;
	if (format[rlen++] != '.')
		return (-20);
	if (format[rlen] == '*')
	{
		psize = va_arg(*ap, int);
		++rlen;
	}
	else if ((rlen += ft_latoi(&format[rlen], (long*)&psize)) < 1)
		return (-20);
	if (psize < 0)
		psize = 0;
	else
		p->flag |= (1 << 5);
	p->precision = psize;
	return (rlen);
}

int		ft_get_width(char *format, t_param *p, va_list *ap)
{
	int		wsize;
	int		rlen;

	if (!format || !p || !ap)
		return (-20);
	rlen = 0;
	wsize = 0;
	if (format[rlen] == '*')
	{
		wsize = va_arg(*ap, int);
		++rlen;
	}
	else if (format[rlen] >= '1' && format[rlen] <= '9'
			&& (rlen += ft_latoi(&format[rlen], (long*)&wsize)) <= -1)
		return (-20);
	if (wsize < 0)
	{
		wsize = -wsize;
		p->flag |= (1 << 3);
	}
	p->width = wsize;
	p->flag |= (1 << 6);
	return (rlen);
}

int		ft_get_size(char *format, t_param *p)
{
	int		i;
	int		ret;
	int		prev;

	if (!format || !p)
		return (-20);
	ret = 0;
	prev = -1;
	while ((i = ft_findchar("hlzj", format[ret])) >= 0)
	{
		if (((prev > -1 && (prev != i || i > 2))) || p->size & (i * 6 + 2))
			return (-20);
		else if (i < 2)
		{
			if (p->size & (i * 3 + 1))
				p->size <<= 1;
			else
				p->size |= ((1 << i * 2));
		}
		else
			p->size |= (1 << (i + 2));
		++ret;
		prev = i;
	}
	return (ret);
}
