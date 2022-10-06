.PHONY : all re clean fclean

SRC = main.cpp \
	  ClapTrap.cpp \
	  ScavTrap.cpp
		
CXX = c++
NAME = scavtrap
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
