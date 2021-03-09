#include <fstream>
#include <iostream>
#include <string.h>
#include <sys/stat.h>

std::string replaceSubstr(std::string str,const char *str1,const char *str2)
{
	size_t index = 0;
	while (true) {
	index = str.find(str1, index);
	if (index == std::string::npos) break;
	str.replace(index, strlen(str1), str2);
	index += strlen(str2);}
	return str;
}

int main(int argc, char const *argv[])
{
	std::ifstream file;
	std::ofstream newFile;
	std::string str;
	if (argc != 4)
	{
		std::cout << "ERROR: Wrong arguments\n";
		return 1;
	}
	struct stat statbuf;
	stat(argv[1], &statbuf);
	if (S_ISDIR(statbuf.st_mode))
		std::cout << "ERROR: " << argv[1] << ": This is directory\n";
	else {
		file.open(argv[1]);
		if (errno == EACCES)
			std::cout << "ERROR: " << argv[1] << ": Access denied\n";
		else if (file)
		{
			newFile.open((std::string(argv[1]) + std::string(".replace")).c_str());
			if (newFile.fail())
				std::cout << "ERROR: " << argv[1] << ": Can't make newfile\n";
			else
				while(std::getline(file, str))
				{
					str = replaceSubstr(str, argv[2], argv[3]);
					newFile << str << std::endl;
				}
		}
		else
			std::cout << "Error: " << argv[1] << ": No such file or directory\n";
	}
	return 0;
}
