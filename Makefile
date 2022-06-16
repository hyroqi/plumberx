# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 17:25:36 by hgabriel          #+#    #+#              #
#    Updated: 2022/06/16 17:27:25 by hgabriel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ${EXE}

SRCS 		=  $(addprefix (SRCSDIR), *.c)

SRCSDIR		= srcs/
OBJSDIR 	= obj/

OBJS 		= $(addprefix $(OBJSDIR), ${SRCS:.c=.o})

EXE			= pipex
LIBFT		= libft/
INCLUDES	= includes

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	make re -C ${LIBFT}
	ar rcs ${LIB} ${OBJS} ${LIBFT}*.o

$(OBJSDIR)%.o: $(SRCSDIR)%.c
	@mkdir -p $(OBJSDIR)
	${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o $@

clean:
	rm -rf ${OBJSDIR}

fclean: clean
	rm -f ${LIB}

re: fclean all

.PHONY: all clean fclean re bonus