#include <cstdlib>

template <typename T>
class Array
{
private:
	unsigned int _size;
	T	*_array;
public:
	Array():_size(0),_array(NULL) {}
	Array(unsigned int n): _size(n) {_array = new T[n];}
	Array &operator=(const Array &array) {
		_size = array._size;
		delete [] _array;
		_array = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_array[i] = T(array._array[i]);
		return (*this);}
	Array(const Array & array):_size(0),_array(NULL)  { *this = array;}
	T &operator[](unsigned int n) { if ( n >= _size) throw; return _array[n];}
	~Array() { delete[] _array;}
	unsigned int size() {return _size;}
};
