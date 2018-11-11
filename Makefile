# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erlazo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 13:59:02 by erlazo            #+#    #+#              #
#    Updated: 2018/11/09 14:03:36 by erlazo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

SRCS	=	the .c files

OBJS	=	$(SRCS:.c=.o)

INCL	=	the .h

all:		$(NAME)

%.o:		%.c
	$(CC) -o $@ -c $< $(CFLAGS) -I $(INCL)

$(NAME):	$(OBJS)
	ar rc $(NAME) $^
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all
