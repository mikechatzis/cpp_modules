# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 14:41:30 by mchatzip          #+#    #+#              #
#    Updated: 2022/03/16 16:51:15 by mchatzip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++
CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

NAME	= horde

SRC		= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp ZombieHorde.cpp

OBJ		= ${SRC:.c=.o}

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) -g $(CFLAGS) -std=c++98 -o $(NAME) $(OBJ)

clean:		
			$(RM) *.o

fclean:		clean
			$(RM) $(NAME)
			rm -r horde.dSYM

re:			fclean all

.PHONY: all clean fclean re