#include <iostream>
#include <initializer_list>
using std::cout; using std::endl; using std::initializer_list;

int sum(initializer_list<int> i1)
{
int sum = 0;
for (auto beg = i1.begin(); beg != i1.end(); ++beg)
{
	sum += *beg;
}
return sum;
}

int main()
{
int sum1 = sum({0,1,2,3});
cout << sum1 << endl;
return 0;
}
