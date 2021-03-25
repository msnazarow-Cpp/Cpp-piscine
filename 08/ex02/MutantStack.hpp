#pragma once
#include <stack>

template <typename T>
class MutantStack : public std::stack <T>
{
public:
	MutantStack():std::stack<T>(){}
	~MutantStack(){}
	MutantStack(const MutantStack & stack):std::stack<T>(stack){}
	MutantStack & operator=(const MutantStack & stack){
		std::stack<T>::operator=(stack);
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	typedef typename std::stack<T>::container_type::difference_type difference_type;
	iterator begin(){	return (this->c.begin());	}
	iterator end(){		return (this->c.end());	}
	const_iterator cbegin(){		return (this->c.cbegin());	}
	const_iterator cend()	{		return (this->c.cend());	}
	reverse_iterator rbegin() { return (this->c.rbegin); }
	reverse_iterator rend() { return (this->c.rend); }
	const_reverse_iterator crbegin() { return (this->c.crbegin); }
	const_reverse_iterator crend() { return (this->c.crend);}
	T& operator[](int n) { return (this->c.operator[](n)); }
};
