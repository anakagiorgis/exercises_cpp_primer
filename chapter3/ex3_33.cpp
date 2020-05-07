#include <iostream>
using std::cin; using std::cout; using std::endl; using std::begin; using std::end;
int main()
{
int arr1[10];
int arr2[10];
int n, m;
cout << "Please enter 10 integers" << endl;
for (size_t i=0; i!=10; ++i)
{
	cin >> n;
	arr1[i] = n;
}
cout << "Please enter 10 more integers" << endl;
for (size_t i=0; i!=10; ++i)
{
	cin >> m;
	arr2[i] = m;
}
int *b1 = begin(arr1);
int *b2 = begin(arr2);
int ind = 0;
for (int i=0; i!=10; ++i)
{
	if (*(b1+i) == *(b2+i))
	{
	}
	else
	{
		ind = 1;
	}
}
if (ind == 0)
{
	cout << "The two arrays are equal" << endl;
}
else
{
	cout << "The two arrays are not equal" << endl;
}
return 0;
}
