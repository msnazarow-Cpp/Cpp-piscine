#include <iostream>
#include "Fixed.hpp"
#include <sstream>
#include <cstdlib>

Fixed eval_expr(std::istringstream &ist, std::string &tmp);
Fixed arg(std::istringstream &ist, std::string &tmp);

Fixed calc(Fixed const & a, Fixed const & b, std::string const & c)
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

Fixed expr2(std::istringstream &ist, std::string &tmp)
{
	std::string tmp2;
	ist >> tmp;
	Fixed arg1 = arg(ist, tmp);
	while (!(tmp == "+" || tmp == "-" || tmp == "*" || tmp == "/"))
	{
		if (tmp == ")")
			{return arg1;}
		else if (!(ist >> tmp))
			return arg1;
	}
	if (tmp == "*" || tmp == "/")
	{
		while (tmp == "*" || tmp == "/" )
		{
			tmp2 = tmp;
			ist >> tmp;
			Fixed arg2 = arg(ist, tmp);
			arg1 = calc(arg1, arg2, tmp2);
		}
	}
	return (arg1);
}


Fixed arg(std::istringstream &ist, std::string &tmp)
{
	int negative = 1;
	Fixed out;
	if (tmp == "+" || tmp == "-")
	{
		if (tmp == "-")
			negative = -1;
		ist >> tmp;
	}
	if (tmp == "(")
	{
		ist >> tmp;
		out = eval_expr(ist, tmp);
		if (tmp == ")")
			ist >> tmp;
		return (negative * out);
	}
	out = negative * Fixed(tmp);
	ist >> tmp;
	return (out);
}

Fixed eval_expr(std::istringstream &ist, std::string &tmp)
{
	std::string tmp2;
	Fixed arg1 = arg(ist, tmp);
	Fixed arg2;
	while (!(tmp == "+" || tmp == "-" || tmp == "*" || tmp == "/"))
	{
		if (tmp == ")")
			{return arg1;}
		else if (!(ist >> tmp))
			return arg1;
	}
	while (tmp != ")")
	{
		tmp2 = tmp;
		if (tmp == "+" || tmp == "-")
		{
			arg2 = expr2(ist, tmp);
		}
		else if (tmp == "*" || tmp == "/")
		{
			ist >> tmp;
			arg2 = arg(ist, tmp);
		}
		arg1 = calc(arg1, arg2, tmp2);
		while (!(tmp == "+" || tmp == "-" || tmp == "*" || tmp == "/"))
		{
			if (tmp == ")")
				{return arg1;}
			else if (!(ist >> tmp))
				return arg1;
		}
	}
	return (arg1);
}

int main(int argc, char **argv) {

	if (argc == 1)
		return (0);
	std::istringstream ist(argv[1]);
	std::string tmp;
	ist >> tmp;
	std::cout<< eval_expr(ist, tmp) << std::endl;
	return 0;
}
