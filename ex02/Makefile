SRCS = main.cpp
FLAGS = -Wall -Werror -Wextra
INCLUDES = Array.hpp
NAME = ex02

all :$(NAME) $(INCLUDES)

$(NAME) : $(SRCS) $(INCLUDES)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -Rf $(NAME)

fclean:clean

re :fclean all