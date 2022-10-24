NAME		:= scalar 

SRC_DIR		:= src
SRCS		:= \
	main.cpp \
	Scalar.cpp \
	getType.cpp \
	printType.cpp \
	castTo.cpp

SRCS		:= $(SRCS:%=$(SRC_DIR)/%)
BUILD_DIR	:= .build
OBJS		:= $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
DEPS		:= $(OBJS:.o:.d)

CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98
CPPFLAGS	:= -MMD -I include

RM			:= rm -rf
MAKEFLAGS	+= --no-print-directory
DIR_DUP		= mkdir -p $(@D)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)
	$(info CREATED $(NAME))

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@$(DIR_DUP)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<
	$(info CREATED $@)

-include $(DEPS)

clean:
	@$(RM) $(OBJS) $(BUILD_DIR)
	$(info REMOVED OBJS & DEPS)

fclean: clean
	@$(RM) $(NAME)
	$(info REMOVED $(NAME))

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: clean fclean re
# .SILENT:
