NAME = ex01

SRC_DIR = ./src/
SRC = main.cpp Span.cpp
OBJ = $(addprefix $(SRC_DIR), $(SRC:.cpp=.o))

INC_DIR = ./inc/
MAIN_INC = -I $(INC_DIR)
HEADER = ./inc/Span.hpp

CC = c++
RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CPPFLAGS) $(OBJ) $(MAIN_INC) -o $(NAME)

$(SRC_DIR)%.o: $(SRC_DIR)%.cpp $(HEADER)
	$(CC) $(CPPFLAGS) $(MAIN_INC) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
