# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/03 13:46:26 by tbez--du          #+#    #+#              #
#    Updated: 2026/05/05 20:06:10 by tbez--du         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	main.cpp \
			ClapTrap.cpp
OBJ		=	$(SRC:.cpp=.o)
DEP		=	$(SRC:.cpp=.d)

NAME	=	clapi

CC		=	c++
CF		=	-Wall -Werror -Wextra



all: $(NAME)

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
