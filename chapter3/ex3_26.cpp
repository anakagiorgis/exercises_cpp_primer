#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;

int main()
{
vector<int> v;
for (size_t i=0; i!=10; ++i)
{
	v.push_back(i+1);
}
for (auto it = v.begin(); it != v.end(); ++it)
{
	*it = (*it)*2;
}
for (size_t i = 0; i != 10; ++i)
{
	cout << v[i] << endl;
}
return 0;
}
