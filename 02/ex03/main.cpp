#include <iostream>
#include "Fixed.hpp"
#include <sstream>
#include <cstdlib>

Fixed eval_expr(std::stringstream &ist, std::string &tmp);
Fixed arg(std::stringstream &ist, std::string &tmp);

Fixed calc(Fixed a, Fixed b, std::string c)
{
	if (c == "+")
		return (a + b);
	else if (c == "-")
		return (a - b);
	else if (c == "/")
	{
		if (b == 0)
		{
			std::cout << " Tы шо, пёс ?\n";
			exit (1);
		}
		else
			return (a / b);
	}
	else if (c == "*")
		return (a * b);
	return (0);
}

Fixed expr2(std::stringstream &ist, std::string &tmp)
{
	std::string tmp2;
	Fixed arg1 = arg(ist, tmp);
	ist >> tmp;
	if (tmp == "*" || tmp == "/")
	{
		tmp2 = tmp;
		while (tmp == "*" || tmp == "/" )
		{
			Fixed arg2 = arg(ist, tmp);
			arg1 = calc(arg1, arg2, tmp2);
		}
	}
	return (arg1);
}


Fixed arg(std::stringstream &ist, std::string &tmp)
{
	int negative = 1;
	Fixed out = 0;
	ist >> tmp;
	if (tmp == "+" || tmp == "-")
	{
		if (tmp == "-")
			negative = -1;
		ist >> tmp;
	}
	if (tmp == "(")
	{
		out = eval_expr(ist, tmp);
		ist >> tmp;
		if (tmp != ")")
			ist << tmp;
		return (negative * out);
	}

	return (negative * Fixed(tmp));
}

Fixed eval_expr(std::stringstream &ist, std::string &tmp)
{
	std::string tmp2;
	Fixed arg1 = arg(ist, tmp);
	Fixed arg2;
	if (tmp == "" || !(tmp == "+" || tmp == "-" || tmp == "/" || tmp == "*"))
		if (!(ist >> tmp))
			return arg1;
	while (tmp != ")")
	{
		tmp2 = tmp;
		if (tmp == "+" || tmp == "-")
			arg2 = expr2(ist, tmp);
		else
			arg2 = arg(ist, tmp);
		arg1 = calc(arg1, arg2, tmp2);
		if (tmp == "" || !(tmp == "+" || tmp == "-" || tmp == "/" || tmp == "*"))
			if (tmp != ")" && !(ist >> tmp))
				break;
	}
	return (arg1);
}

int main(int argc, char **argv) {

	if (argc != 2)
		return (0);
	std::stringstream ist(argv[1]);
	std::string tmp = "";
	std::cout<< eval_expr(ist, tmp) << std::endl;
	return 0;
}
