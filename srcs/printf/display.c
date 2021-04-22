/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:57:48 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/22 01:17:10 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_disp_bn(int fd, int c, int *ret)
{
	char	*str;

	if (!ret || !(str = ft_itoa(c)))
		return (-1);
	c = ft_fstrlen(str);
	write(fd, str, c);
	*ret += c;
	free(str);
	return (1);
}

int		ft_handle_sn(char *str, int c)
{
	long	n;
	int		*num;

	if (!str || ft_latoi(str, &n) == -8)
		return (0);
	num = (int*)n;
	*num = c;
	return (1);
}

int		ft_display_del(int fd, t_pfelem **lst)
{
	int			c;
	int			ret;
	t_pfelem	*tmp;

	c = 0;
	ret = 0;
	if (!lst)
		return (-1);
	while (*lst)
	{
		if ((*lst)->size > 0)
		{
			write(fd, (*lst)->content, (*lst)->size);
			c += (*lst)->size;
			ret += (*lst)->size;
		}
		else if (((*lst)->size == -2 && (c = ft_disp_bn(fd, c, &ret)) == -1)
				|| ((*lst)->size == -3 && !ft_handle_sn((*lst)->content, c)))
			return (-1);
		tmp = (*lst)->next;
		free((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	return (ret);
}
