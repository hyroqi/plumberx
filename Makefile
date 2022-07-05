# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 17:25:36 by hgabriel          #+#    #+#              #
#    Updated: 2022/07/06 04:05:06 by hgabriel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= pipex
GCC 		= gcc -Wall -Wextra -Werror

# MANDATORY
SRCS		= pipex.c \
			  pipex_utils.c 
SRCSDIR		= srcs/
OBJS		= ${SRCS:.c=.o}
OBJSDIR		= objs/

# BONUS
SRCBONUS = pipex_bonus.c \
		   pipex_utils.c \
		   pipex_bonus_utils.c 
OBJSBONUS = ${SRCBONUS:.c=.o}
MAINBONUS = srcs/pipex_bonus.c

# LIBFT
LIBFT_A	 = libft.a
LIBFTDIR = libft/
LIBFT 	 = $(addprefix $(LIBFTDIR), $(LIBFT_A))

INCLUDES = -Iincludes






all	:	${NAME}

${NAME}:
	mkdir -p $(OBJSDIR)
	$(CC) -c $(addprefix $(SRCSDIR), $(SRCS))
	mv $(OBJS) $(OBJSDIR)
	make -C ${LIBFTDIR}
	$(CC) $(LIBFT) $(addprefix $(OBJSDIR), $(OBJS)) -o $(NAME)

clean:
	make clean -c ${LIBFTDIR}
	rm -rf $(OBJSDIR)
	rm -f ${OBJS} ${OBJSBONUS}

fclean: clean
	make -c $(LIBFTDIR) fclean
	rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re