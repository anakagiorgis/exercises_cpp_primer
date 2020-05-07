#include <iostream>
using std::cout; using std::endl;
int main()
{
int ia[3][4];
size_t cnt = 0;
using int_array = int[4];
for (int_array &row : ia)
{
	for (int &col : row)
	{
		col = cnt;
		++cnt;
	}
}
for (size_t i=0; i!=3; ++i)
{
	for (size_t j=0; j!=4; ++j)
	{
		cout << ia[i][j] << " ";
	}
	cout << endl;
}
return 0;
}
