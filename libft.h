/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:05:41 by erlazo            #+#    #+#             */
/*   Updated: 2020/09/16 02:14:52 by ericlazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct	s_nlist
{
	int				index;
	void			*content;
	struct s_nlist	*next;
}				t_nlist;

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/*
**	Mem Functions
*/

void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			ft_memdel(void **ap);
void			*ft_memalloc(size_t size);

/*
**	Str Functions
*/

char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *haystack,
				const char *needle, size_t len);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);

char			*ft_strdup(const char *s1);

/*
**	Is Check Functions 8
*/

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isspace(char c);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

/*
**	Put Functions 9
*/

void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putnbr(int n);
void			ft_putendl(char const *s);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbrnl(int nb);

/*
**	List Functions 13
*/

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void*));
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void*),
				void (*del)(void*));
void			ft_print_elem(t_list *elem);
void			ft_lstprint(t_list *lst);
t_list			*ft_lstgen(char *s, char c);
void			ft_lstrev(t_list **lst);

/*
**	nList Functions 6
*/

t_nlist			*ft_nlstnew(void* content, int index);
int				ft_nlstadd_front(t_nlist **lst, t_nlist *new);
int				ft_nlstadd_back(t_nlist **lst, t_nlist *new);
int				ft_nlstdel_all(t_nlist **lst);
int				ft_nlstdel_n_one(t_nlist **lst, int n);
char			*ft_read_nlst_n(t_nlist *lst, int i);

/*
**	Atoi Functions 4
*/

int				ft_atoi(const char *str);
int				ft_latoi(char *str, int *len);
char			*ft_itoa(int n);
char			*ft_pos_itoa(unsigned long long n);

/*
**	Join Functions table manipulation funcs ?
*/

char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_fstrjoin(char **s1, char **s2);
char			*ft_cstrjoin(char c, char **s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char *set);

/*
**	Some organization
*/

/*
**	Some organization
*/

/*
**	Some organization
*/



void			ft_bzero(void *s, size_t n);
size_t			ft_strlen(const char *s);


char			*ft_strnew(size_t size);
char			*ft_substr(char const *s, unsigned int start, size_t len);


int				ft_findchar(char *str, char c);
void			*ft_calloc(size_t count, size_t size);
int				gnl(char **l, char **s, int b_size, int fd);

char			*ft_fill_with(char this, size_t len);
int				ft_scott_free(char **str);

int				ft_free_strtab(char **tab);
int				ft_print_strtab(char **tab);

/*
**	More Str Functions 9
*/

void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_strswap(char **s1, char **s2);



// New Functions
/*

	Not sure what else ill need, will have to look around



*/

#endif
