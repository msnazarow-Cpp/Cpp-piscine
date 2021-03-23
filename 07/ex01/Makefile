OBJ = main.o
NAME = main
CXX ?= clang++ -std=c++98
CPPFLAGS ?= -Wall -Wextra -Werror -g -MMD -D_GLIBCXX_DEBUG
DFILES = $(OBJ:.o=.d)
all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ) $(DFILES)

fclean: clean
	rm -f $(NAME)

re:	fclean all
-include