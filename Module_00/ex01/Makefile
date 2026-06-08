# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olmatske <olmatske@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/08 14:24:38 by olmatske          #+#    #+#              #
#    Updated: 2026/06/08 20:30:48 by olmatske         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CXX = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp helpers.cpp
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
