template <typename T>
void iter(T * a, int l, T(*f)(T))
{
	for (int i = 0; i < l; i++)
		a[i] =  f(a[i]);
}