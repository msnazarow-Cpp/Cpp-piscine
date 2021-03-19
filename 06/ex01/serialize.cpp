#include <string>
#include <iostream>
#include <cstdlib>

typedef struct serialize
{
	std::string *str;
	int a;
	std::string *str2;
	~serialize()
	{
		delete str;
		delete str2;
	}
}	Data;

std::string *randomstr(void)
{
	std::string *str = new std::string(rand() % 100, 's');
	for (size_t i = 0; i < str->length(); i++)
		(*str)[i] = rand() % 90 + 32;
	return str;
}

void *serialize(void)
{
	Data *memory = new Data;
	memory->a = rand();
	memory->str = randomstr();
	memory->str2 = randomstr();
	std::cout << *memory->str << std::endl << *memory->str2 << std::endl <<  memory->a  << std::endl;
	return (memory);
}

Data *deserialize(void *raw)
{
	Data *memory = (Data*)raw;
	return memory;
}

int main(void)
{
	srand(time(NULL));
	Data *memory = reinterpret_cast<Data*>(deserialize(serialize()));
	std::cout << *memory->str << std::endl << *memory->str2 << std::endl <<  memory->a  << std::endl;
	delete memory;
	return 0;
}
