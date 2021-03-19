#include <cstdlib>
#include <iostream>

class Base {
	public : virtual ~Base(){}
	};
class A: public Base {
	public:
	static A *create()
	{
		return new A;
	}
};
class B: public Base {
	public:
	static B *create()
	{
		return new B;
	}
};
class C: public Base {
	public:
	static C *create()
	{
		return new C;
	}
};

Base *generate(void)
{
	typedef Base *(*creates)(void);
	creates crs[3] = {reinterpret_cast<creates>(&A::create), reinterpret_cast<creates>(&B::create), reinterpret_cast<creates>(&C::create)};
	std::string types[3] = {"A", "B", "C"};
	int a = rand() % 3;
	std::cout << types[a] << std::endl;
	return (crs[a]());
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		(void)(dynamic_cast<A&>(p));
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			(void)(dynamic_cast<B&>(p));
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)(dynamic_cast<C&>(p));
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}

	}
}

int main(void)
{
	srand(time(NULL));
	Base * test = generate();
	identify_from_pointer(test);
	identify_from_reference(*test);
	delete test;
	return 0;
}
