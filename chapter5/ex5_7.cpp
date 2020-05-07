#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;
int main()
{
int indicator = 1;
vector<int> v1;
vector<int> v2;
int n;
int m;
cout << "Please enter integers for the first vector" << endl;
while (cin >> n)
{
	if (n==1337)
	{
		break;
	}
	v1.push_back(n);
}
cout << "Please enter integers for the second vector" << endl;
while (cin >> m)
{
	if (m==1337)
	{
		break;
	}
	v2.push_back(m);
}
if (v2.size() > v1.size())
{
	for (vector<int>::size_type i=0; i!=v1.size(); ++i)
	{
		if (v1[i] != v2[i])
		{
			indicator = 0;
		}
	}
}
else if (v2.size() <= v1.size())
{
	for (vector<int>::size_type i=0; i!=v2.size(); ++i)
	{
		if (v2[i] != v1[i])
		{
			indicator = 0;
		}
	}
}
if (indicator == 1)
{
	cout << "true" << endl;
}
else if (indicator == 0)
{
	cout << "false" << endl;
}
return 0;
}
