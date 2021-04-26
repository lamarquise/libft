/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ericlazo <erlazo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 04:35:20 by ericlazo          #+#    #+#             */
/*   Updated: 2021/04/26 19:16:13 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	// leaving it libft.h for the read...
#include "libft.h"

int		ft_gnl(char **line, int fd)
{
	static char	*s;
	ssize_t		i;
	char		*p;
	char		b[17];

	p = NULL;
	if ((i = ft_sfindchar(s, '\n')) != -1)
	{
		if (!(*line = ft_strsub(s, 0, (size_t)i++)) \
			|| (!(p = ft_strsub(s, i, ft_sstrlen(s) - (size_t)i))))
			return (-1);
		free(s);
		s = p;
		return (1);
	}
	if (!line || !ft_ibzero(b, 17) || (i = read(fd, b, 16)) < -1
		|| (i > 0 && !(p = ft_gstrjoin(&s, b)))
		|| (s && s[0] && ++i == 1 && !(*line = ft_gstrjoin(&s, (void*)0)))
		|| (i < 1 && !(*line) && !(*line = ft_strsub(NULL, 0, 0))) || i < 0)
		return (-1);
	free(s);
	s = p;
	return ((i > 0) ? ft_gnl(line, fd) : 0);
}
