/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 18:29:21 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/22 01:18:56 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_list_add(t_pfelem **lst, char **s, int len)
{
	t_pfelem	*new;

	new = NULL;
	if (!lst || !s)
		return (0);
	if (!(new = ft_str_to_elem(*s, len)))
		return (0);
	if (!ft_pflist_append(lst, new))
	{
		free(new->content);
		free(new);
		return (0);
	}
	return (1);
}

int		ft_listify_not_spec(int i, int c, char *format, t_pfelem **lst)
{
	char		*tmp;
	t_pfelem	*new;

	tmp = NULL;
	new = NULL;
	if (!format || !lst || c < 0 || c > i)
		return (-1);
	if (!(tmp = ft_substr(format, c, i - c)))
		return (-1);
	if (!ft_list_add(lst, &tmp, i - c))
		return (ft_scott_free(&tmp, -1));
	ft_scott_free(&tmp, 0);
	return (1);
}

int		ft_parsing_hq(char *format, va_list *ap, t_pfelem **lst)
{
	int		i;
	int		c;
	int		m;
	char	*str;

	if (!format || !ap || !lst)
		return (-1);
	i = 0;
	str = NULL;
	while (format[i])
	{
		if ((m = ft_findchar(&format[i], '%')) != -1)
		{
			i += m;
			if ((m > 0 && ft_listify_not_spec(i, i - m, format, lst) == -1)
				|| (c = ft_spec_parsing(&format[i], ap, &str, &m)) == -1
				|| !ft_list_add(lst, &str, m))
				return (ft_scott_free(&str, -1));
			i += ft_scott_free(&str, c);
		}
		else
			return (ft_listify_not_spec(ft_fstrlen(format), i, format, lst));
	}
	return (1);
}
