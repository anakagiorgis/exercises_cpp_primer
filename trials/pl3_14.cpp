#include <iostream>
using std::cout; using std::endl; using std::begin; using std::end;
int main()
{
int ia[] = {0,1,2,3,4,5,6,7,8,9};
int *beg = begin(ia);
int *last = end(ia);
for (int *i = beg; i != last; ++i)
{
	cout << *i << endl;
}
return 0;
}
