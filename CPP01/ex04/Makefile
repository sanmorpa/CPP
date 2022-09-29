SRCS =	main.cpp

NAME =	replace

CLANG =	clang++

FLAGS =	-Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

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
