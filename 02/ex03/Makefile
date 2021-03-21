OBJ = Fixed.o main.o
NAME = eval_expr
CXX ?= clang++ -std=c++98
CPPFLAGS ?= -Wall -Wextra -Werror -g -MMD -D_GLIBCXX_DEBUG

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
-include $(OBJ:.o=.d)