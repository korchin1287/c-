
NAME = frag

SRCS = main.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp
	
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
