.PHONY : all re clean fclean

SRC = main.cpp \
	  Fixed.cpp \
	  Point.cpp \
	  bsp.cpp

CXX = c++
NAME = bsp
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
