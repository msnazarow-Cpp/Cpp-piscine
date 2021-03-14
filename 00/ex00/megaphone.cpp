#include <iostream>

int main(int argc, char const *argv[])
{
	std::string str = "Lala just test string";
	if (argc == 1)
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else {
		argv += 1;
		while (*argv)
		{
			str = *argv;
			for (size_t i = 0; i < str.length(); i++)
				str[i] = toupper(str[i]);
			std::cout << str;
			argv++;
		}
		std::cout << '\n';
	}
	return 0;
}
