.PHONY : all re clean fclean

SRC = main.cpp \
	  AMateria.cpp \
	  Cure.cpp \
	  Ice.cpp \
	  ICharacter.cpp \
	  IMateriaSource.cpp
		
CXX = c++
NAME = animal
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
