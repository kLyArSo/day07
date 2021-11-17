SRCS = main.cpp
FLAGS = -Wall -Werror -Wextra
INCLUDES = 
NAME = ex00

all :$(NAME)

$(NAME) : $(SRCS) $(INCLUDES)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -Rf $(NAME)

fclean:clean

re :fclean all