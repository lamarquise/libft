/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_funcs.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:05:41 by erlazo            #+#    #+#             */
/*   Updated: 2021/08/10 17:38:07 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_FUNCS_H
# define STR_FUNCS_H

/*
**	Str Functions 6
*/

int				ft_nstrdup(char **cp, char *og);
char			*ft_strdup(const char *s1);
int				ft_nstrlen(char *s, int ret);
size_t			ft_strlen(const char *s);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_substr(char const *s, unsigned int start, size_t len);

#endif
