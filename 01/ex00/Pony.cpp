#include "Pony.hpp"
#include "unistd.h"
#include <iostream>

Pony::Pony(int age, int weight , int height, std::string color, std::string sex):
	age(age), weight(weight), height(height), color(color), sex(sex){}

void Pony::run()
{
	int i = 0;
	std::cout<< "I'm " << this->age << " years, " << this->weight << " kilos and " << this->height << "cm tall. Let's go!\n";
	for (int k = 0; k < 9 ; k++)
	{
		for (int j = 0; j < i; j++)
			std::cout<< ".";
		std::cout << "( ͡° ͜ʖ ͡°)";
		for (int j = 0; j < 80 - i; j++)
			std::cout<< ".";
		std::cout << std::endl;
		i+=10;
		usleep(500000);
	}
	for (int j = 0; j < 88; j++)
			std::cout<< ".";
	std::cout << "\\(￣▽￣)/\n";
}

Pony::~Pony()
{
}
