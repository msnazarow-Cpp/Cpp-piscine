#pragma once
#include <cstdlib>
#include <string>

class Zombie
{
private:
	std::string name;
	std::string type;
public:
	void announce();
	Zombie(std::string type = "", std::string name = "");
	~Zombie();
};
