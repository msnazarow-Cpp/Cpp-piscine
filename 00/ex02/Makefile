OBJ = Account.class.o tests.o
NAME = test
CXX = clang++ -std=c++98
CPPFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all