# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabarbos <mabarbos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 15:08:04 by mabarbos          #+#    #+#              #
#    Updated: 2024/03/01 15:19:10 by mabarbos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= $(wildcard sources/*.c)
OBJS	= $(SRCS:.c=.o)

NAME	= libftprintf.a
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror 


all :  ${NAME}

$(NAME) : ${OBJS}
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

.c.o : 
	${CC} ${CFLAGS} -c $< -o $@ 


clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}


re : fclean all

.PHONY: all clean fclean re .c.o bonus help