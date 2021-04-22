/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pfelem_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 18:48:49 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/22 01:19:08 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_pfelem	*ft_new_pfelem(char *str, int size)
{
	t_pfelem	*new;

	if (!str)
		return (NULL);
	if (!(new = (t_pfelem*)ft_memalloc(sizeof(t_pfelem))))
		return (NULL);
	new->content = str;
	new->size = size;
	new->next = NULL;
	return (new);
}

t_pfelem	*ft_str_to_elem(char *str, int size)
{
	t_pfelem	*new;
	char		*cp;
	int			num;

	if (!str)
		return (NULL);
	cp = NULL;
	new = NULL;
	num = (size < -1 ? ft_fstrlen(str) : size);
	if (!(cp = (char*)ft_memalloc(sizeof(char) * (num + 1))))
		return (NULL);
	if (!ft_memcpy(cp, str, num))
		return ((t_pfelem*)ft_scott_free(&cp, 0));
	if (!(new = ft_new_pfelem(cp, size)))
		return ((t_pfelem*)ft_scott_free(&cp, 0));
	return (new);
}

int			ft_pflist_append(t_pfelem **lst, t_pfelem *new)
{
	t_pfelem	*tmp;

	if (!lst || !new)
		return (0);
	if (!(*lst))
	{
		*lst = new;
		return (1);
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->next = NULL;
	return (1);
}

int			ft_pflist_del_all(t_pfelem **lst)
{
	t_pfelem	*tmp;

	if (!lst)
		return (-1);
	while (*lst)
	{
		tmp = (*lst)->next;
		free((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	return (-1);
}
