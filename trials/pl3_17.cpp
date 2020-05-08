#include <iostream>
using std::cout; using std::endl; using std::begin; using std::end;
int main()
{
int arr[3][4];
size_t cnt = 0;
for (auto &row : arr)
{
	for (auto &col : row)
	{
		col = cnt;
		++cnt;
	}
}
for (auto p = begin(arr); p != end(arr); ++p)
{
	for (auto q = begin(*p); q != end(*p); ++q)
	{
		cout << *q << " ";
	}
	cout << endl;
}
return 0;
}
