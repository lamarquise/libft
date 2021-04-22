/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_funcs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:05:41 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/22 01:48:41 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOI_FUNCS_H
# define ATOI_FUNCS_H

/*
**	Atoi Functions 4
*/

int				ft_atoi(const char *str);
int				ft_latoi(char *str, long *num);
char			*ft_itoa(int n);
char			*ft_pos_itoa(unsigned long long n);

#endif
