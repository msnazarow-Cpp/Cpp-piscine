#include "MutantStack.hpp"
#include <iostream>
#include <stack>

int main()
{
	{
		MutantStack<int> mstack;
		std::stack<int> sds;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		for (size_t i = 0; i < mstack.size(); i++)
		{
			std::cout << mstack[i] << std::endl;
		}
		std::stack<int> s(mstack);
	}
	{
		MutantStack<std::string> mstack;
		std::stack<std::string> sds;
		mstack.push("Bob");
		mstack.push("Alice");
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push("Mark");
		mstack.push("Antonio");
		mstack.push("Fedor");
		mstack.push("");
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		for (size_t i = 0; i < mstack.size(); i++)
		{
			std::cout << mstack[i] << std::endl;
		}
		std::stack<std::string> s(mstack);
	}
	return 0;
}