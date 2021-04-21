/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_plus_funcs.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:05:41 by erlazo            #+#    #+#             */
/*   Updated: 2020/10/07 23:28:29 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_PLUS_FUNCS_H
# define MEM_PLUS_FUNCS_H

/*
**	Mem Functions 9
*/

char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_fstrjoin(char **s1, char **s2);
char			*ft_cstrjoin(char c, char **s2);
void			ft_bzero(void *s, size_t n);
long			ft_scott_free(char **str, int ret);
char			*ft_fill_with(char this, int len);
void			*ft_memalloc(size_t size);
char			**ft_split(char const *s, char *set);
int				gnl(char **l, char **s, int b_size, int fd);

#endif