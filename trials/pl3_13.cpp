#include <iostream>
using std::cout; using std::endl;
int main()
{
int arr[] = {1,2,3,4,5,6,7,8,9};
int *e = &arr[9];
for (int *b=arr; b!=e; ++b)
{
	cout << *b << endl;
}
return 0;
}
