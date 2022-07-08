# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 17:25:36 by hgabriel          #+#    #+#              #
#    Updated: 2022/07/09 03:45:38 by hgabriel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= pipex
GCC 		= gcc -Wall -Wextra -Werror

# MANDATORY
SRCS		= pipex.c \
			  pipexutils.c \
			  ft_split.c \
			  ft_strlcpy.c \
			  ft_strnstr.c \
			  ft_strchr.c \
			  ft_strjoin.c \
			  ft_strlen.c 
SRCSDIR		= srcs/
OBJS		= ${SRCS:.c=.o}
OBJSDIR		= objs/

all	:	${NAME}

${NAME}:
	$(GCC) $(addprefix $(SRCSDIR), $(SRCS)) -o $(NAME)

clean:
	rm -rf $(NAME)

re:		clean all

.PHONY: all clean fclean re