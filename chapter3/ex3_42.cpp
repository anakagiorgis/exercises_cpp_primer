#include <iostream>
using std::cout; using std::endl;
int main()
{
int ia[3][4];
size_t cnt = 0;
using int_array = int[4];
for (int_array *p = ia; p!=ia+3; ++p)
{
	for (int *q = *p; q!=*p+4; ++q)
	{
		*q = cnt;
		++cnt;
	}
}
for (int_array *p = ia; p!=ia+3; ++p)
{
	for (int *q = *p; q!=*p+4; ++q)
	{
		cout << *q << " ";
	}
	cout << endl;
}
return 0;
}
