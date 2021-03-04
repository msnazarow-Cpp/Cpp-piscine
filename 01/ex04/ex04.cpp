#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN\n";
	std::string *pstr = &str;
	std::string &ppstr = str;

	std::cout << str << *pstr << ppstr;
	std::cout << &str << std::endl << &pstr  << std::endl  << &ppstr << std::endl ;
	return 0;
}