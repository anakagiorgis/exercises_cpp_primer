#include <list>
#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::list; using std::vector;

int main()
{
vector<int> v = {1,2,3,4,5,6,7,8,9,10};
list<int> l;
copy(v.rbegin()+3, v.rbegin()+8, back_inserter(l));
for (auto it = l.begin(); it != l.end(); ++it)
{
	cout << *it << endl;
}
return 0;
}
