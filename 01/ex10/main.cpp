#include <iostream>
#include <fstream>
#include <filesystem>
#include <sys/stat.h>

int main(int argc, char const *argv[])
{
	std::ifstream file;
	std::string str;
	argv++;
	if (argc == 1)
		while(std::getline(std::cin, str))
			std::cout << str << std::endl;
	else
		while (*argv)
		{
			struct stat statbuf;
			stat(*argv, &statbuf);
			if (S_ISDIR(statbuf.st_mode))
				std::cout << "cat: " << *argv << ": Это каталог\n";
			else {
			file.open(*argv);
			if (errno == EACCES)
				std::cout << "cat: " << *argv << ": Отказано в доступе\n";
			else if (file)
				while(std::getline(file, str))
					std::cout << str << std::endl;
			else
				std::cout << "cat: " << *argv << ": Нет такого файла или каталога\n";
			}
			argv++;
		}
	return 0;
}
