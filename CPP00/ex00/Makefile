NAME =	megaphone

GCC =	clang++

FLAGS =	-Wall -Wextra -Werror -std=c++98

SRCS =	megaphone.cpp

OBJS =	$(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re