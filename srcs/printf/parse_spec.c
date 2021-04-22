/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_spec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 18:33:24 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/22 01:18:47 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_init_param(t_param *p)
{
	if (!p)
		return (0);
	p->flag = 0;
	p->width = 0;
	p->precision = 0;
	p->size = 0;
	p->spec = '\0';
	return (1);
}

int		ft_pick_handler(va_list *ap, char **str, t_param *p, int *m)
{
	if (!ap || !str || !p || !m || *m > 13 || *m < 0)
		return (0);
	if (*m <= 2)
		*m = ft_handle_int(ap, str, p);
	else if (*m <= 7)
		*m = ft_handle_uint(ap, str, p);
	else if (*m <= 8)
		*m = ft_handle_char(ap, str, p);
	else if (*m <= 9)
		*m = ft_handle_str(ap, str, p);
	else if (*m == 10)
		*m = ft_handle_pointer(ap, str, p);
	else if (*m == 11 && ft_nstrdup(str, "") != -1)
		*m = -2;
	else if (*m == 12 && (*str = ft_pos_itoa(va_arg(*ap, unsigned long))))
		*m = -3;
	else if (*m == 13)
		*m = ft_handle_modulo(str, p);
	else
		return (0);
	return (1);
}

int		ft_spec_parsing(char *format, va_list *ap, char **str, int *m)
{
	int		ret;
	t_param	p;

	if (!format || !ap || !str || !m)
		return (-1);
	*m = 0;
	ret = 0;
	if (!ft_init_param(&p) || format[ret++] != '%')
		return (-1);
	if ((ret += ft_flag_parsing(&format[ret], &p, ap)) <= -1)
		return (-1);
	if ((*m = ft_findchar("diBbuoxXcspNn%", format[ret])) < 0)
		return (-1);
	p.spec = format[ret];
	if (!ft_pick_handler(ap, str, &p, m))
		return (-1);
	return ((*m == -1) ? -1 : 1 + ret);
}
