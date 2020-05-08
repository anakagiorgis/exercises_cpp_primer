#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
using std::vector; using std::list; using std::cin; using std::cout;
using std::endl; using std::unique_copy;
int main()
{
vector<int> v = {1,2,3,4,5,6,7,8,9,10};
list<int> l;
unique_copy(v.begin(), v.end(), back_inserter(l));
for (auto it = v.begin(); it != v.end(); ++it)
{
	cout << *it << endl;
}
for (auto it = l.begin(); it != l.end(); ++it)
{
	cout << *it << endl;
}
return 0;
}
