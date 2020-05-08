#include <iostream>
using std::cin; using std::cout; using std::endl;

int larger(int i, int* p)
{
if (i >= *p)
{
	return i;
}
else
{
	return *p;
}
}

int main()
{
int i, j;
cout << "Enter the first integer" << endl;
cin >> i;
cout << "Enter the second integer" << endl;
cin >> j;
int *p = &j;
int k = larger(i, p);
cout << k << " is the largest integer" << endl;
return 0;
}
