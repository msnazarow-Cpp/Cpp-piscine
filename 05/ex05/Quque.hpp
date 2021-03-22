#include <cstdlib>
template <typename T>
class Quque
{
public:
	Quque(T content):_next(NULL),_content(content){}
	Quque(const Quque & queqe){ *this = queqe;}
	Quque &operator=(const Quque & quque)
	{
		Quque *pointer = (Quque*)&quque;
		Quque *my = this;
		_content = T(quque._content);
		while (pointer->_next)
		{
			my->_next = new Quque(T(pointer->_next->_content));
			my = my->_next; pointer = pointer->_next;
	}
	return (*this);
	};
	~Quque(){};
	int push(T content) {
		int count = 1;
		Quque *pointer;
		int makeSence = 1;
		pointer = this;
		while (pointer->_next){
			if (pointer->_content == content)
				makeSence = 0;
			pointer = pointer->_next;
			count++;}
		if (makeSence && pointer->_content != content)
			pointer->_next = new Quque(content);
		return (count);
	}
	void pop(void){
		Quque *A = this;
		A->_next = 0;
		*this = *this->_next;
		delete A;
	};
	T front(void)
	{
		return _content;
	};
	bool empty(void)
	{
		return (_next);
	};
private:
	Quque *_next;
	T _content;
};