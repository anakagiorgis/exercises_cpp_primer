#include <iostream>
using std::cin; using std::cout; using std::endl;

int abs(int n)
{
if (n<0)
{
	return -n;
}
else
{
	return n;
}
}

int main()
{
int a = abs(-5);
cout << a << endl;
return 0;
}
