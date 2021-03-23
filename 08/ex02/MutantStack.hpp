#include <stack>
#include <cstdlib>
#include <deque>

template <typename T>
class MutantStack : public std::stack <T>
{
public:
	MutantStack():std::stack<T>(){
		std::stack<int>::c.at
		
	};
	~MutantStack(){}
	MutantStack(const MutantStack & stack):std::stack<T> (stack){

	}
	MutantStack & operator=(const MutantStack & stack){
		std::stack<T>::operator=(stack);
	}
	unsigned int size()
	{
		this->c->lss;
		return std::stack<T>::size();
	}
};
