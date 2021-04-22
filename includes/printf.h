/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 16:13:46 by erlazo            #+#    #+#             */
/*   Updated: 2021/04/22 01:38:51 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

/*
**	Flag Defines
*/

# define F_ZERO		0x01
# define F_HASH		0x02
# define F_PLUS		0x04
# define F_MINU		0x08
# define F_SPAC		0x10
# define F_PREC		0x20
# define F_WIDT		0x40
# define F_NULL		0x80

/*
**	Size Defines
*/

# define C_H		0x01
# define C_HH		0x02
# define C_L		0x04
# define C_LL		0x08
# define C_Z		0x10
# define C_J		0x20

typedef struct	s_param
{
	char		spec;
	int			flag;
	int			width;
	int			precision;
	int			size;
}				t_param;

typedef struct	s_pfelem
{
	char			*content;
	int				size;
	struct s_pfelem	*next;
}				t_pfelem;

/*
**	Printf.c
*/

int				ft_disp(char *msg, int ret);
int				ft_printf(const char *format, ...);
int				ft_fdprintf(int fd, const char *format, ...);

/*
**	Parsing
*/

int				ft_parsing_hq(char *format, va_list *ap, t_pfelem **lst);
int				ft_listify_not_spec(int i, int c, char *format, t_pfelem **lst);
int				ft_list_add(t_pfelem **lst, char **s, int len);
int				ft_spec_parsing(char *format, va_list *ap, char **str, int *m);
int				ft_pick_handler(va_list *ap, char **str, t_param *p, int *m);
int				ft_init_param(t_param *p);
int				ft_flag_parsing(char *format, t_param *p, va_list *ap);
int				ft_get_precision(char *format, t_param *p, va_list *ap);
int				ft_get_width(char *format, t_param *p, va_list *ap);
int				ft_get_size(char *format, t_param *p);

/*
**	PF List stuff
*/

t_pfelem		*ft_new_pfelem(char *str, int size);
t_pfelem		*ft_str_to_elem(char *str, int size);
int				ft_pflist_append(t_pfelem **lst, t_pfelem *new);
int				ft_pflist_del_all(t_pfelem **lst);

/*
**	Casting functions
*/

int				ft_cast_d(va_list *ap, t_param *p, long long *num, int *neg);
int				ft_cast_u(va_list *ap, t_param *p, unsigned long long *num);

/*
**	Handler functions
*/

int				ft_handle_int(va_list *ap, char **str, t_param *param);
int				ft_handle_uint(va_list *ap, char **str, t_param *p);
int				ft_handle_str(va_list *ap, char **str, t_param *param);
int				ft_handle_char(va_list *ap, char **str, t_param *p);
int				ft_handle_modulo(char **str, t_param *p);
int				ft_handle_pointer(va_list *ap, char **str, t_param *p);

/*
**	Gen Arg functions in Handler files
*/

int				ft_str_has_wid(t_param *p, char **pre, char **str);
int				ft_h_str_wid(t_param *p, char **str, int *len);
int				ft_h_point_prec(char **str, t_param *p, int *len);
int				ft_h_point_wid(t_param *p, char **pre, char **str);
int				ft_gen_arg_str_i(t_param *p, char **tmp, int len, int neg);
int				ft_gen_arg_str_s(t_param *p, char **str, int *len);

/*
**	Gen Arg Str
*/

int				ft_add_hash(char **pre, t_param *p);
int				ft_h_int_space(t_param *p, char **pre);
int				ft_h_int_wid(t_param *p, char **pre, char **tmp, int neg);
int				ft_prec_is_zero(char **str, int *len);
int				ft_h_str_prec(t_param *p, char **str, int *len);

/*
**	Display
*/

int				ft_disp_bn(int fd, int c, int *ret);
int				ft_handle_sn(char *str, int c);
int				ft_display_del(int fd, t_pfelem **lst);

/*
**	Base Convert
*/

int				ft_base_check(char *base);
char			*ft_to_base(unsigned long long nb, char *base);

/*
**	Minor Extra, technically stupid that they exist, but not gonna change 
**	my printf at this point...
*/

int				ft_fstrlen(const char *s);
char			*ft_fstrdup(char *str);

#endif