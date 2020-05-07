#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;
int main()
{
vector<int> v1;
vector<int> v2;
int n, m;
cout << "Please enter 10 integers" << endl;
for (size_t i=0; i!=10; ++i)
{
	cin >> n;
	v1.push_back(n);
}
cout << "Please enter 10 more integers" << endl;
for (size_t i=0; i!=10; ++i)
{
	cin >> m;
	v2.push_back(m);
}
int indicator = 0;
for (size_t k=0; k!=10; ++k)
{
	if (v1[k]==v2[k])
	{
	}
	else
	{
		indicator = 1;
	}
}
if (indicator == 0)
{
	cout << "The two vectors are equal" << endl;
}
else
{
	cout << "The two vectors are not equal" << endl;
}
return 0;
}
