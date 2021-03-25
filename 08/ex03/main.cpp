#include <cstring>
#include <exception>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include <iosfwd>
#include "Mindopen.hpp"
#if !defined(S_ISREG) && defined(S_IFMT) && defined(S_IFREG)
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#endif
#if !defined(S_ISDIR) && defined(S_IFMT) && defined(S_IFDIR)
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#endif


int exit_error(int n, const char *s)
{
	std::cerr << s << std::endl;
	exit(n);
}

int main(int argc, char* argv[])
{
	Mindopen::Mindopen mymind;
	errno = 0;
	if (argc != 2)
		exit_error(1, "ERROR: Wrong number of arguments");
	if (!strlen(argv[1]))
		exit_error(2,"ERROR: File name cannot be empty string");
	struct stat statbuf;
	stat(argv[1], &statbuf);
	if (errno)
		exit_error(3, (std::string("ERROR: ") + argv[1] + " : " + strerror(errno)).c_str());
	std::ifstream file;
	if (!S_ISREG(statbuf.st_mode))
		exit_error(4, (std::string("ERROR: ") + argv[1] + " : This is not a file!").c_str());
	else {
		file.open(argv[1]);
		if (errno)
			exit_error(5, (std::string("ERROR: ") + argv[1] + " : " + strerror(errno)).c_str());
	}
	mymind.read(file);
	file.close();
	mymind.execute();
	return (0);
}
