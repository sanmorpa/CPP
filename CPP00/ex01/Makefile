NAME =	phonebook

GCC =	clang++

FLAGS =	-Wall -Wextra -Werror -std=c++98

SRCS =	CrappyPhonebook.cpp Contact.cpp main.cpp

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