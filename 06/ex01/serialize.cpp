#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
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
	void *memory = ::operator new(2 * sizeof(std::string *) + sizeof(int));

	*reinterpret_cast<std::string**>(memory) = randomstr();
	*reinterpret_cast<int*>(reinterpret_cast<char*>(memory) + sizeof(std::string*)) = rand();
	*reinterpret_cast<std::string**>(reinterpret_cast<char*>(memory) + sizeof(std::string*) + sizeof(int)) = randomstr();
	std::cout << std::setw(15) << "first string: "<< **reinterpret_cast<std::string**>(memory) << std::endl;
	std::cout << std::setw(15) <<  "second string: " << **reinterpret_cast<std::string**>(reinterpret_cast<char*>(memory) + sizeof(std::string*) + sizeof(int))  << std::endl;
	std::cout << std::setw(15) << "integer : " << *reinterpret_cast<int*>(reinterpret_cast<char*>(memory) + sizeof(std::string*)) << std::endl;
	return (memory);
}

Data *deserialize(void *raw)
{
	Data *memory = new Data;
	memory->str = *reinterpret_cast<std::string**>(raw);
	memory->a = *reinterpret_cast<int*>(reinterpret_cast<char*>(raw) + sizeof(std::string*));
	memory->str2 = *reinterpret_cast<std::string**>(reinterpret_cast<char*>(raw) + sizeof(std::string*) + sizeof(int));
	::operator delete(raw);
	return memory;
}

int main(void)
{
	srand(time(NULL));
	Data *memory = deserialize(serialize());
	std::cout << std::setw(15) << "first string: "<< *memory->str << std::endl << std::setw(15) <<  "second string: " <<  *memory->str2 << std::endl << std::setw(15) << "number: " << memory->a  << std::endl;
	delete memory;
	return 0;
}
