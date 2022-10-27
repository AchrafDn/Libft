# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 20:54:32 by adadoun           #+#    #+#              #
#    Updated: 2022/10/27 17:57:53 by adadoun          ###   ########.fr        #
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
		ft_isdigit.c \
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

OBJ = ${CFILES:.c=.o}
RM = rm -f
LIBC = ar -rc
NAME = libft.a  

all : $(NAME)

$(NAME) : $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

${OBJ} :  $(CFILES)
	$(CC) $(CFLAGS) -c $?
	
clean :
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all