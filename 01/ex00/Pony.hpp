#ifndef PONY_HPP
#define PONY_HPP

#include <cstdlib>
#include <string>

class Pony
{
private:
	int age;
	int weight;
	int height;
	std::string color;
	std::string sex;
public:
	void run();
	~Pony();
	Pony(int age, int weight, int height, std::string color, std::string sex);
};

#endif