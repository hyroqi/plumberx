# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 17:25:36 by hgabriel          #+#    #+#              #
#    Updated: 2022/06/16 20:43:17 by hgabriel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= pipex

SRCS 		= $(wildcard srcs/*.c)

INCLUDES	= -Iincludes
SRCSDIR		= srcs/
OBJSDIR 	= obj/
OBJS 		= $(addprefix $(OBJSDIR), ${SRCS:.c=.o})
COMPILER	= gcc
CFLAGS		= -Wall -Wextra -Werror

all: 			${NAME}

${NAME}: 		${OBJS}

$(OBJSDIR)%.o:	 $(SRCSDIR)%.c
	@mkdir -p ${OBSJDIR}
	${COMPILER} ${CFLAGS} ${INCLUDES} -c $< -o $^


.PHONY: all clean fclean re