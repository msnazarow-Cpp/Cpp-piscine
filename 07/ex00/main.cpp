#include "whatever.hpp"
#include <iostream>
#include <ostream>

class Awesome {
	public:
	Awesome( int n): _n(n){}

	bool operator==(const Awesome &other) const { return _n == other._n; }
	bool operator!=(const Awesome &other) const { return !operator==(other); }
	bool operator>=(const Awesome &other) const { return _n >= other._n; }
	bool operator<=(const Awesome &other) const { return _n <= other._n; }
	bool operator>(const Awesome &other) const { return _n > other._n; }
	bool operator<(const Awesome &other) const { return _n < other._n; }

	int n() const;
	private:
	int _n;
};
inline int Awesome::n() const {
	return _n;
}
std::ostream &operator<<(std::ostream &stream, Awesome &a)
{
	return (stream << a.n());
}
int main(void)
{
	{
		int a = 3;
		int b = 6;
		::swap(a, b);

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "max: " << max(a, b) << std::endl;
		std::cout << "min: " << min(a, b) << std::endl;
	}
	{
		std::string a = "Bob";
		std::string b = "Bil";
		::swap(a, b);

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "max: " << max(a, b) << std::endl;
		std::cout << "min: " << min(a, b) << std::endl;
	}
	{
		Awesome a(10);
		Awesome b(8);
		::swap(a, b);

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "max: " << max(a, b) << std::endl;
		std::cout << "min: " << min(a, b) << std::endl;
	}
	return 0;
}
