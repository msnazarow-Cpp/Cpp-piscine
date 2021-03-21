#include <stack>
#include <vector>

template <typename T>
class MutantStack : virtual public std::stack <T>, virtual public std::vector<T>
{
private:


public:
	unsigned int size()
	{
		this->cbegin()
		return std::stack<T>::size();
	}
};