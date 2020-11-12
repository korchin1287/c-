# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 16:44:11 by nofloren          #+#    #+#              #
#    Updated: 2020/11/12 20:42:07 by nofloren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

SRCS = Brain.cpp main.cpp Human.cpp
	
OBJ = $(SRCS:.cpp=.o)

INCLUDES = ./
FLAGS = -Wall -Wextra -Werror 
all: $(NAME)

$(NAME):$(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	clang++ $(FLAGS) -I $(INCLUDES) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean:clean
	/bin/rm -f $(NAME)

re:fclean all