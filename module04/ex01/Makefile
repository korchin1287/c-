
NAME = a

SRCS = main.cpp AWeapon.cpp Character.cpp\
        Enemy.cpp PlasmaRifle.cpp PowerFirst.cpp\
        RadScorpion.cpp SuperMutant.cpp
	
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
