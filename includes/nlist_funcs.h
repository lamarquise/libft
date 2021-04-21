/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nlist_funcs.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:05:41 by erlazo            #+#    #+#             */
/*   Updated: 2020/10/07 23:28:29 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NLIST_FUNCS_H
# define NLIST_FUNCS_H

typedef struct	s_nlist
{
	int				index;
	void			*content;
	struct s_nlist	*next;
}				t_nlist;

/*
**	nList Functions 6
*/

t_nlist			*ft_nlstnew(void* content, int index);
int				ft_nlstadd_front(t_nlist **lst, t_nlist *new);
int				ft_nlstadd_back(t_nlist **lst, t_nlist *new);
int				ft_nlstdel_all(t_nlist **lst);
int				ft_nlstdel_n_one(t_nlist **lst, int n);
char			*ft_read_nlst_n(t_nlist *lst, int i);

#endif