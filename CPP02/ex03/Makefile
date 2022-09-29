SRCS =	Fixed.cpp main.cpp Point.cpp bsp.cpp

NAME =	a.out

CLANG =	clang++

FLAGS =	-Wall -Wextra -Werror -std=c++98

OBJS =	$(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):$(OBJS)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
