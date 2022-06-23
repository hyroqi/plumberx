# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 17:25:36 by hgabriel          #+#    #+#              #
#    Updated: 2022/06/23 20:09:07 by hgabriel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= pipex

SRCS		= $(wildcard *.c)
GCC 		= gcc -Wall -Wextra -Werror
SRCSDIR 	= ${addprefix srcs/${SRCS}}

all	:	${NAME}

${NAME}	:
	gcc ${SRCS} pipex.c -o ${NAME}

clean:
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean re