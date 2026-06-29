# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/11 13:10:01 by olmatske          #+#    #+#              #
#    Updated: 2026/06/15 14:18:19 by olmatske         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde
CXX = c++
FLAGS = -Wall -Werror -Wextra -std=c++17

SRC = main.cpp newZombie.cpp zombieHorde.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
