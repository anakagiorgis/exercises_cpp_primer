#include <iostream>
using std::cout; using std::endl;

int fact(int n)
{
if (n == 1)
{
	return n;
}
else if (n > 1)
{
	return n*fact(n-1);
}
}

int main()
{
cout << "5! is " << fact(5) << endl;
return 0;
}
