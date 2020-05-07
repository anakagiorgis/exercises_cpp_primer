#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;
int main()
{
int arr1[10];
int arr2[10];
vector<int> v1;
vector<int> v2;
for (size_t i=0; i!=10; ++i)
{
	arr1[i] = i;
}
for (size_t i=0; i!=10; ++i)
{
	arr2[i] = arr1[i];
}
for (size_t i=0; i!=10; ++i)
{
	v1.push_back(i);
}
for (auto it=v1.begin(); it!=v1.end(); ++it)
{
	v2.push_back(*it);
}
for (auto i : arr1)
{
	cout << i << " ";
}
cout << endl;
return 0;
}
