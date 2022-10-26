# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adadoun <adadoun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 20:54:32 by adadoun           #+#    #+#              #
#    Updated: 2022/10/26 03:11:03 by adadoun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_split.c ft_substr.c ft_strlen.c 

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