/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ericlazo <erlazo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 04:34:38 by ericlazo          #+#    #+#             */
/*   Updated: 2021/04/26 19:15:53 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

size_t	ft_sstrlen(const char *s);
int     ft_sfindchar(char *str, char c);
char    *ft_strsub(char *s, unsigned int start, size_t len);
int     ft_ibzero(void *s, size_t n);
char    *ft_gstrjoin(char **s1, char *s2);
int		ft_gnl(char **line, int fd);

#endif
