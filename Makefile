# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabarbos <mabarbos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 15:04:33 by mabarbos          #+#    #+#              #
#    Updated: 2024/03/01 15:04:33 by mabarbos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS_SR			=	server.o
OBJS_CL			=	client.o
NAME_SR			=	server
NAME_CL			=	client
INCS			=	./libft/
INCS_PRT		=	./libft/ft_printf/sources/
LIB				=	libft.a
CC				=	gcc
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -I$(INCS) -I$(INCS_PRT)


all : $(NAME_CL) $(NAME_SR)

$(LIB) :
	make -C $(INCS)

$(NAME_CL) : $(LIB) $(OBJS_CL) 
	${CC} ${CFLAGS} ${OBJS_CL} -o ${NAME_CL} $(INCS)/$(LIB) 
	
$(NAME_SR) : $(LIB) $(OBJS_SR) 
	${CC} ${CFLAGS} ${OBJS_SR} -o ${NAME_SR} $(INCS)/$(LIB) 
	
.c.o :
	${CC} ${CFLAGS} -c $^ -o $@

clean :
	${RM} ${OBJS_CL} $(OBJS_SR) ${OBBN_CL} $(OBBN_SR)

ffclean : clean fclean
	make fclean -C ./libft
	make fclean -C ./libft/ft_printf

fclean : clean
	${RM} ${NAME_CL} $(NAME_SR)

re : fclean all

run :
	@./$(NAME)