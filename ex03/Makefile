# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/15 18:17:36 by tbez--du          #+#    #+#              #
#    Updated: 2026/05/20 12:42:33 by tbez--du         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp \
			main.cpp
OBJ		=	$(SRC:.cpp=.o)
DEP		=	$(SRC:.cpp=.d)

NAME	=	diami

CC		=	c++
CF		=	-Wall -Werror -Wextra -std=c++98


all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CF) $(OBJ) -o $(NAME)

-include $(DEP)
%.o:	%.cpp
	$(CC) $(CF) -c $< -o $@ -MMD -MP -MF $*.d

clean:
	rm -f $(OBJ)
	rm -f $(DEP)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
