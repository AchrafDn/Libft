# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 20:54:32 by adadoun           #+#    #+#              #
#    Updated: 2022/11/01 14:12:23 by adadoun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_isalnum.c \
		ft_isalpha.c \
		ft_atoi.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strrchr.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strdup.c \
		ft_strnstr.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c
BNS =	ft_lstnew_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c \
		
OBJ = ${CFILES:.c=.o}
BNS_OBJ = ${BNS:.c=.o}

RM = rm -f
NAME = libft.a  

all : $(NAME)

$(NAME) : $(OBJ)

${OBJ} :  $(CFILES)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@
	ar -crs $(NAME) $@

bonus: ${OBJ} ${BNS_OBJ}
	
clean :
	$(RM) $(OBJ) $(BNS_OBJ)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re bonus