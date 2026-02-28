NAME = 
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = megaphone.cpp
OBJ = $(SRCS:.cpp=.o)

%.o: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)ö

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re