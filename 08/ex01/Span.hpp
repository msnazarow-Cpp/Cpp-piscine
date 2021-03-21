#include <vector>

class Span: public std::vector<int>
{
	public:
		void addnumber(int n);
		void addnumber(int n1, int n2);
		Span(unsigned int n);
		Span(const Span &span);
		Span &operator=(const Span &span);
		~Span();
		int longestSpan();
		int shortestSpan();
		class OverFlowsException: public std::exception
		{
			public : virtual char const *what() const throw();
		};
		class FewMembersExecetion: public std::exception
		{
			public : virtual char const *what() const throw();
		};
	private:
		size_t _current;
};