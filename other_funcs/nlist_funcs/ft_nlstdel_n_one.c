/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlstdel_n_one.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ericlazo <erlazo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 02:09:22 by ericlazo          #+#    #+#             */
/*   Updated: 2020/09/07 02:13:38 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	// assuming it works...

#include "libft.h"

int		ft_nlstdel_n_one(t_nlist **lst, int n)
{
	t_nlist *tmp;
	t_nlist	*elem;

//	printf("del ing test 1\n");

	if (!lst || !*lst)
		return (0);
	if (n == 0)
	{
		tmp = (*lst)->next;
		free((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	else
	{
		tmp = *lst;
		while (tmp->index < n - 1)
			tmp = tmp->next;
		elem = (*lst)->next;
		free(elem->content);
		tmp->next = elem->next;
		free(elem);
		tmp = tmp->next;
	}
	while (tmp)
	{
		tmp->index -= 1;
		tmp = tmp->next;
	}
//	printf("del end\n");
	return (1);
}
