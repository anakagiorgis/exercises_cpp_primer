#include <iostream>
using std::cout; using std::endl; using std::begin; using std::end;
int main()
{
int ia[] = {1,2,3,4,5,6,7,8,9,10};
for (int *p = begin(ia); p != end(ia); ++p)
{
	*p = 0;
}
for (auto i : ia)
{
	cout << i << endl;
}
return 0;
}
