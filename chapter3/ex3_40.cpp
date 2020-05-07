#include <iostream>
using std::cout; using std::endl; using std::begin; using std::end;
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
for (int_array &row : ia)
{
	for (int &col : row)
	{
		cout << col << " ";
	}
	cout << endl;
}
return 0;
}
