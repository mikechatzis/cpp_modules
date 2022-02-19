# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 14:41:30 by mchatzip          #+#    #+#              #
#    Updated: 2022/02/03 15:19:12 by mchatzip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++
CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

NAME	= megaphone

SRC		= megaphone.cpp

OBJ		= ${SRC:.c=.o}

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) -g $(CFLAGS) -std=c++98 -o $(NAME) $(OBJ)

clean:		
			$(RM) *.o

fclean:		clean
			$(RM) $(NAME)
			rm -r megaphone.dSYM

re:			fclean all

.PHONY: all clean fclean re