# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erlazo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 13:59:02 by erlazo            #+#    #+#              #
#    Updated: 2021/04/21 23:48:12 by ericlazo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#maybe not do linked list folder with t list in it ? for now ?
# For now only Full libft, eventually have so can do only essencial

NAME	=	libft.a

DIR_SRCS	=	./srcs/

DIR_ATOI	=	$(DIR_SRCS)atoi_funcs/
ATOI_FUNCS	=	ft_atoi.c \
				ft_latoi.c \
				ft_itoa.c \
				ft_pos_itoa.c \

DIR_MEMP	=	$(DIR_SRCS)mem_plus_funcs/
MEMP_FUNCS	=	ft_bzero.c \
				ft_cstrjoin.c \
				ft_strjoin.c \
				ft_fstrjoin.c \
				ft_fill_with.c \
				ft_memalloc.c \
				ft_scott_free.c \
				ft_split.c \
				gnl.c \

DIR_MEMM	=	$(DIR_SRCS)mem_funcs_more/
MEMM_FUNCS	=	ft_calloc.c \
				ft_memset.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memdel.c \

DIR_SIMP	=	$(DIR_SRCS)simple_funcs/
SIMP_FUNCS	=	ft_findchar.c \
				ft_error_msg.c \

DIR_STR		=	$(DIR_SRCS)str_funcs/
STR_FUNCS	=	ft_substr.c \
				ft_strdup.c \
				ft_nstrdup.c \
				ft_strlen.c \
				ft_nstrlen.c \
				ft_strcmp.c \

DIR_STRM	=	$(DIR_SRCS)str_funcs_more/
STRM_FUNCS	=	ft_strstr.c \
				ft_strnstr.c \
				ft_strcpy.c \
				ft_strncpy.c \
				ft_strlcpy.c \
				ft_strcat.c \
				ft_strncat.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strequ.c \
				ft_strnequ.c \
				ft_strnew.c \
				ft_strswap.c \
				ft_strclr.c \
				ft_strdel.c \
				ft_strtrim.c \

DIR_IS		=	$(DIR_SRCS)is_funcs/
IS_FUNCS	=	ft_isalpha.c \
				ft_isdigit.c \
				ft_str_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isspace.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \

DIR_PUT		=	$(DIR_SRCS)put_funcs/
PUT_FUNCS	=	ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putchar.c \
				ft_putendl.c \
				ft_putnbrnl.c \
				ft_putstr.c \
				ft_putnbr.c \

DIR_TAB		=	$(DIR_SRCS)tab_funcs/
TAB_FUNCS	=	ft_free_strtab.c \
				ft_print_strtab.c \


DIR_ALL_LST	=	$(DIR_SRCS)linked_list_funcs/

DIR_LST		=	$(DIR_ALL_LST)list_funcs/
LST_FUNCS	=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_print_elem.c \
				ft_lstprint.c \
				ft_lstgen.c \
				ft_lstrev.c \

DIR_NLST	=	$(DIR_ALL_LST)nlist_funcs/
NLST_FUNCS	=	ft_nlstnew.c \
				ft_nlstadd_back.c \
				ft_nlstdel_all.c \
				ft_nlstadd_front.c \
				ft_nlstdel_n_one.c \
				ft_read_nlst_n.c \


	# this is all the files with their paths attached
FULL_SRCS	=	$(addprefix $(DIR_ATOI), $(ATOI_FUNCS)) \
				$(addprefix $(DIR_IS), $(IS_FUNCS)) \
				$(addprefix $(DIR_PUT), $(PUT_FUNCS)) \
				$(addprefix $(DIR_MEMP), $(MEMP_FUNCS)) \
				$(addprefix $(DIR_MEMM), $(MEMM_FUNCS)) \
				$(addprefix $(DIR_STR), $(STR_FUNCS)) \
				$(addprefix $(DIR_STRM), $(STRM_FUNCS)) \
				$(addprefix $(DIR_TAB), $(TAB_FUNCS)) \
				$(addprefix $(DIR_SIMP), $(SIMP_FUNCS)) \
				$(addprefix $(DIR_LST), $(LST_FUNCS)) \
				$(addprefix $(DIR_NLST), $(NLST_FUNCS))


	# this is just the file names, all of them
ALL_SRCS	=	$(ATOI_FUNCS) $(IS_FUNCS) $(PUT_FUNCS) $(MEMP_FUNCS) $(MEMM_FUNCS) \
				$(STR_FUNCS) $(STRM_FUNCS) $(TAB_FUNCS) $(SIMP_FUNCS) $(LST_FUNCS) \
				$(NLST_FUNCS)


#COMP_SRC	=	$(addprefix $(DIR_COMP),$(COMP))
#MEDI_SRC	=	$(addprefix $(DIR_MEDI),$(MEDI))
#SIMP_SRC	=	$(addprefix $(DIR_SIMP),$(SIMP))
#TLST_SRC	=	$(addprefix $(DIR_TLST),$(TLST))

#LLST_SRC	=	$(addprefix $(DIR_LLST),$(TLST_SRC))

#ESS_SRC		=	$(addprefix $(DIR_ESS),$(COMP_SRC)) \
				$(addprefix $(DIR_ESS),$(MEDI_SRC)) \
				$(addprefix $(DIR_ESS),$(SIMP_SRC)) \
				$(addprefix $(DIR_ESS),$(LLST_SRC)) \

#MEMF_SRC	=	$(addprefix $(DIR_MEMF),$(MEMF))
#STRF_SRC	=	$(addprefix $(DIR_STRF),$(STRF))
#PUTF_SRC	=	$(addprefix $(DIR_PUTF),$(PUTF))
#ISCH_SRC	=	$(addprefix $(DIR_ISCH),$(ISCH))

#NLST_SRC	=	$(addprefix $(DIR_NLST),$(NLST))

#OTH_SRC		=	$(addprefix $(DIR_OTH),$(MEMF_SRC)) \
				$(addprefix $(DIR_OTH),$(STRF_SRC)) \
				$(addprefix $(DIR_OTH),$(PUTF_SRC)) \
				$(addprefix $(DIR_OTH),$(ISCH_SRC)) \
				$(addprefix $(DIR_OTH),$(NLST_SRC)) \


DIR_OBJ		=	./obj/
#ESS_OBJ		=	$(COMP:.c=.o) \
#				$(MEDI:.c=.o) \
#				$(SIMP:.c=.o) \
#				$(TLST:.c=.o) \
				

#OTH_OBJ		=	$(MEMF:.c=.o) \
#				$(STRF:.c=.o) \
#				$(PUTF:.c=.o) \
#				$(ISCH:.c=.o) \
#				$(NLST:.c=.o) \

#ESS_OBJS	=	$(addprefix $(DIR_OBJ),$(ESS_OBJ))
#OTH_OBJS	=	$(addprefix $(DIR_OBJ),$(OTH_OBJ))


	# will need a better include bit

#INC		=	$(NAME:.a=.h)
DIR_INC	=	includes/
#INCS	=	$(addprefix $(DIR_INC),$(INC))

INCS	=	libft.h \
			atoi_funcs.h \
			is_funcs.h \
			list_funcs.h \
			nlist_funcs.h \
			mem_plus_funcs.h \
			mem_funcs_more.h \
			put_funcs.h \
			simple_funcs.h \
			str_funcs.h \
			str_funcs_more.h \
			tab_funcs.h \

FULL_INCS	= $(addprefix $(DIR_INC), $(INCS))


CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -I$(DIR_INC)



FULL	=	hi



	# may want to try with $(ALL_SRCS:...) as well...
DIR_OBJ	=	./objs/
#OBJS		=	$(FULL_SRCS:%.c=$(DIR_OBSJ)%.o)
#OBJS		=	$(FULL_SRCS:%.c=$(DIR_OBSJ)%.o)
#OBJS		=	$(FULL_SRCS:%.c=$(DIR_OBSJ)%.o)
OBJS		=	$(ALL_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	printf "$(_GREEN)\r\33[2K\rFull $(NAME) created  😎\n$(_END)"

# do i actually only need to say if the dir where incs are kept needs to looked at..
#$(DIR_OBJ)%.o: $(FULL_SRCS)%.c $(FULL_INCS)
#$(DIR_OBJ)%.o: $(ALL_SRCS)%.c
$(DIR_OBJ)%.o: $(FULL_SRCS)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"




#$(NAME): $(ESS_OBJS) $(OTH_OBJS) $(INCS)
#	ar rc $(NAME) $(ESS_OBJS) $(OTH_OBJS)
#	ranlib $(NAME)
#	printf "$(_GREEN)\r\33[2K\rFull $(NAME) created  😎\n$(_END)"

#$(DIR_OBJ)%.o: ./essencial_funcs/$(DIR_COMP)%.c $(INCS)
#	mkdir -p $(DIR_OBJ)
#	$(CC) $(CFLAGS) -c $< -o $@ -I $(DIR_INC)
#	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

#$(DIR_OBJ)%.o: ./essencial_funcs/$(DIR_MEDI)%.c $(INCS)
#	mkdir -p $(DIR_OBJ)
#	$(CC) $(CFLAGS) -c $< -o $@ -I $(DIR_INC)
#	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

#$(DIR_OBJ)%.o: ./essencial_funcs/$(DIR_SIMP)%.c $(INCS)
#	mkdir -p $(DIR_OBJ)
#	$(CC) $(CFLAGS) -c $< -o $@ -I $(DIR_INC)
#	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

#$(DIR_OBJ)%.o: ./essencial_funcs/linked_list_funcs/$(DIR_TLST)%.c $(INCS)
#	mkdir -p $(DIR_OBJ)
#	$(CC) $(CFLAGS) -c $< -o $@ -I $(DIR_INC)
#	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

#$(DIR_OBJ)%.o: ./other_funcs/$(DIR_MEMF)%.c $(INCS)
#	mkdir -p $(DIR_OBJ)
#	$(CC) $(CFLAGS) -c $< -o $@ -I $(DIR_INC)
#	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

#$(DIR_OBJ)%.o: ./other_funcs/$(DIR_STRF)%.c $(INCS)
#	mkdir -p $(DIR_OBJ)
#	$(CC) $(CFLAGS) -c $< -o $@ -I $(DIR_INC)
#	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

#$(DIR_OBJ)%.o: ./other_funcs/$(DIR_PUTF)%.c $(INCS)
#	mkdir -p $(DIR_OBJ)
#	$(CC) $(CFLAGS) -c $< -o $@ -I $(DIR_INC)
#	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

#$(DIR_OBJ)%.o: ./other_funcs/$(DIR_ISCH)%.c $(INCS)
#	mkdir -p $(DIR_OBJ)
#	$(CC) $(CFLAGS) -c $< -o $@ -I $(DIR_INC)
#	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

#$(DIR_OBJ)%.o: ./other_funcs/$(DIR_NLST)%.c $(INCS)
#	mkdir -p $(DIR_OBJ)
#	$(CC) $(CFLAGS) -c $< -o $@ -I $(DIR_INC)
#	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

clean:
	rm -rf $(DIR_OBJ)
	echo "$(_RED).o Files Deleted  😱$(_END)"

fclean: clean
	rm -rf $(NAME)
	echo "$(_RED)Library Deleted  😱$(_END)"

re:			fclean all

#ess: $(NAME)

# Try using ifs to make so second one with same name doesn't relink...
#$(NAME2): $(ESS_OBJS) $(OTH_OBJS) $(INCS)
#	ar rc $(NAME2) $(ESS_OBJS) $(OTH_OBJS)
#	ranlib $(NAME2)
#	I hate the touch full thing but use it for now...
#	touch full
#	printf "$(_GREEN)\r\33[2K\rFull $(NAME2) created  😎\n$(_END)"
	
.PHONY: all clean fclean re

.SILENT:

##################
##    COLORS    ##
##################

_GREY=$ \033[30m
_RED=$ \033[31m
_GREEN=$ \033[32m
_YELLOW=$ \033[33m
_BLUE=$ \033[34m
_PURPLE=$ \033[35m
_CYAN=$ \033[36m
_WHITE=$ \033[37m
_END=$ \033[0m
