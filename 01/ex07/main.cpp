#include <fstream>
#include <iostream>
#include <string.h>

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
		return 1;
	file.open(argv[1]);
	newFile.open((std::string(argv[1]) + std::string(".replace")).c_str());
	while(std::getline(file, str))
	{
		str = replaceSubstr(str, argv[2], argv[3]);
		newFile << str << std::endl;
	}
	return 0;
}
