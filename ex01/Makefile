SRCS = main.cpp
FLAGS = -Wall -Werror -Wextra
INCLUDES = iter.hpp
NAME = ex01

all :$(NAME) $(INCLUDES)

$(NAME) : $(SRCS) $(INCLUDES)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -Rf $(NAME)

fclean:clean

re :fclean all