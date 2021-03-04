OBJ = megaphone.o
NAME = megaphone
CXX = clang++ -std=c++98

CPPFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all