
NAME = a

SRCS = main.cpp Sorcerer.cpp Victim.cpp Peon.cpp
	
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
