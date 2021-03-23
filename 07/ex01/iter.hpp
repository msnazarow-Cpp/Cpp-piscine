template <typename T>
void iter(T * a, int l, void (*f)(T const &))
{
	for (int i = 0; i < l; i++)
		f(a[i]);
}