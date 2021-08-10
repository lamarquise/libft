# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erlazo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 13:59:02 by erlazo            #+#    #+#              #
#    Updated: 2021/08/09 19:31:19 by ericlazo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

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

DIR_GNL		=	$(DIR_SRCS)gnl/
FT_GNL		=	gnl.c \
				utils.c \

DIR_PRINTF	=	$(DIR_SRCS)printf/
FT_PRINTF	=	ft_printf.c \
				parsing_main.c \
				parse_spec.c \
				parse_flags.c \
				handle_int.c \
				handle_str.c \
				handle_modulo.c \
				handle_pointer.c \
				gen_arg_str.c \
				pfelem_list.c \
				base_conversion.c \
				minor_extra.c \
				display.c \

	# currently unused...
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
				$(addprefix $(DIR_NLST), $(NLST_FUNCS)) \
				$(addprefix $(DIR_PRINTF), $(FT_PRINTF)) \

	# also unused...
ALL_DIRS	=	$(DIR_ATOI)%.c $(DIR_IS)%.c $(DIR_PUT)%.c $(DIR_MEMP)%.c \
				$(DIR_MEMM)%.c $(DIR_STR)%.c $(DIR_STRM)%.c $(DIR_TAB)%.c \
				$(DIR_SIMP)%.c $(DIR_LST)%.c $(DIR_NLST)%.c


	# also also unused...
	# this is just the file names, all of them
ALL_SRCS	=	$(ATOI_FUNCS) $(IS_FUNCS) $(PUT_FUNCS) $(MEMP_FUNCS) $(MEMM_FUNCS) \
				$(STR_FUNCS) $(STRM_FUNCS) $(TAB_FUNCS) $(SIMP_FUNCS) $(LST_FUNCS) \
				$(NLST_FUNCS) $(FT_PRINTF) $(FT_GNL)

DIR_OBJ	=	./objs/
OBJ			=	$(ATOI_FUNCS:.c=.o) \
				$(IS_FUNCS:.c=.o) \
				$(PUT_FUNCS:.c=.o) \
				$(STR_FUNCS:.c=.o) \
				$(STRM_FUNCS:.c=.o) \
				$(MEMP_FUNCS:.c=.o) \
				$(MEMM_FUNCS:.c=.o) \
				$(LST_FUNCS:.c=.o) \
				$(NLST_FUNCS:.c=.o) \
				$(TAB_FUNCS:.c=.o) \
				$(SIMP_FUNCS:.c=.o) \
				$(FT_PRINTF:.c=.o) \
				$(FT_GNL:.c=.o) \

# could do the if thing for printf here...
# i think i'll just keep it in... for now anyway


OBJS		=	$(addprefix $(DIR_OBJ),$(OBJ))

DIR_INC	=	includes/
	# also also also unused...
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
			printf.h \

INCS_2	=	$(addprefix $(DIR_INC),$(INCS))

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -I$(DIR_INC)

all: $(NAME)

#$(OBJS): | $(DIR_OBJ)

$(NAME): $(OBJS) $(INCS_2)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	printf "$(_GREEN)\r\33[2K\rFull $(NAME) created  😎\n$(_END)"


	# I tried so many things, non of them work...
# cannot seem to get a Makefile that compiles '.o's into a single 'objs/' folder
# from '.c's that are in many different folder... This is very frustrating...
 

	# full_srcs doesn't work.. you need the %.c...
#$(DIR_OBJ)%.o: $(FULL_SRCS) | $(DIR_INC)

	# i really hoped this would work but it does not, it compiles all of
# them from ft_atoi (which is first) not sure if they're all different with
# the same name or all the same, but in any case, check the '.o' files, 
# they all end up with _ft_atoi, it works but none of the rest of them do

#$(DIR_OBJ)%.o: $(FULL_SRCS)
#$(DIR_OBJ)%.o: $(ALL_DIRS)%.c
#$(DIR_OBJ)%.o: $(wildcard $(ALL_DIRS)/*.c)
#$(DIR_OBJ)%.o: $(wildcard $(ALL_DIRS)/%.c)
#$(DIR_OBJ)%.o: $(wildcard $(ALL_DIRS))%.c
	# works but not what i want, i would need one rule for each folder...
#$(DIR_OBJ)%.o: $(DIR_ATOI)%.c

#$(DIR_OBJ)%.o: $(foreach dir,$(ALL_DIRS), $(dir)%.c)
	#sadly does not work... i need the path...
#$(DIR_OBJ)%.o: %.c
#$(DIR_OBJ)%.o: $(foreach dir,$(ALL_DIRS), $(dir))%.c
#$(DIR_OBJ)%.o: $(DIR_ATOI)%.c

#$(DIR_OBJ)%.o: $(foreach file,$(FULL_SRCS), $(file))
#$(DIR_OBJ)%.o: $(foreach dir,$(ALL_DIRS), $(dir))
#$(DIR_OBJ)%.o: $(ALL_DIRS)

#print: $(foreach dir,$(ALL_DIRS), $(dir))%.c
#	printf "$^"

#print2: $(DIR_ATOI)%.c
#	printf "$^"





$(DIR_OBJ)%.o: $(DIR_ATOI)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

$(DIR_OBJ)%.o: $(DIR_IS)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

$(DIR_OBJ)%.o: $(DIR_PUT)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

$(DIR_OBJ)%.o: $(DIR_STR)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

$(DIR_OBJ)%.o: $(DIR_STRM)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

$(DIR_OBJ)%.o: $(DIR_MEMP)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

$(DIR_OBJ)%.o: $(DIR_MEMM)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

$(DIR_OBJ)%.o: $(DIR_SIMP)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

$(DIR_OBJ)%.o: $(DIR_TAB)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

$(DIR_OBJ)%.o: $(DIR_LST)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

$(DIR_OBJ)%.o: $(DIR_NLST)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

$(DIR_OBJ)%.o: $(DIR_GNL)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

$(DIR_OBJ)%.o: $(DIR_PRINTF)%.c
	mkdir -p $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(_CYAN)\r\33[2K\rCompling $@$(_END)"

clean:
	rm -rf $(DIR_OBJ)
	echo "$(_RED).o Files Deleted  😱$(_END)"

fclean: clean
	rm -rf $(NAME)
	echo "$(_RED)Library Deleted  😱$(_END)"

re:			fclean all

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
