#include <iostream>
using std::cout; using std::endl;
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
for (size_t i=0; i!=3; ++i)
{
	for (size_t j=0; j!=4; ++j)
	{
		cout << arr[i][j] << " ";
	}
	cout << endl;
}
return 0;
}
