# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erlazo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 13:59:02 by erlazo            #+#    #+#              #
#    Updated: 2019/11/21 17:15:00 by erlazo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

SRCS	=	ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_strdup.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_calloc.c \
			ft_strmapi.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

SRCS_BONUS	=	ft_lstnew.c \
				ft_lstdelone.c \
				ft_lstadd_front.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_lstadd_back.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstclear.c \
				ft_lstcut_next.c \
				ft_lstdel_cnt.c \
				ft_lstnl.c \
				ft_lstset.c \
				ft_lstprint.c \
				ft_lstrev.c \
				ft_lstgen.c \
				ft_print_elem.c \
				ft_strswap.c \
				ft_findchar.c \
				ft_strcpy.c \
				ft_strncpy.c \
				ft_strcat.c \
				ft_strncat.c \
				ft_strequ.c \
				ft_strnequ.c \
				ft_strstr.c \
				ft_strcmp.c \
				ft_strnew.c \
				ft_strdel.c \
				ft_strclr.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strmap.c \
				ft_memalloc.c \
				ft_memdel.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putendl.c \
				ft_putnbr.c \
				ft_putnbrnl.c \
				ft_isspace.c \

OBJS		=	$(SRCS:.c=.o)

OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

INCL		=	libft.h

all:		$(NAME)

%.o:		%.c
	$(CC) -o $@ -c $< $(CFLAGS) -I $(INCL)

$(NAME):	$(OBJS)
	ar rc $(NAME) $^
	ranlib $(NAME)

clean:
	rm -rf $(OBJS) $(OBJS_BONUS)

fclean:		clean
	rm -rf $(NAME)
	rm -f bonus

re:			fclean all

bonus:		$(OBJS) $(OBJS_BONUS)
	ar rc $(NAME) $^
	ranlib $(NAME)
	touch bonus

.PHONY: all clean fclean re
