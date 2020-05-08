#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using std::copy; using std::vector; using std::list;
using std::cin; using std::cout; using std::endl;
int main()
{
vector<int> v = {1,2,3,4,5,6,7,8,9};
list<int> lst1;
list<int> lst2;
list<int> lst3;
copy(v.begin(), v.end(), back_inserter(lst1));
copy(v.begin(), v.end(), front_inserter(lst2));
copy(v.begin(), v.end(), inserter(lst3, lst3.begin()));
for (auto it = lst1.begin(); it != lst1.end(); ++it)
{
	cout << *it << endl;
}
for (auto it = lst2.begin(); it != lst2.end(); ++it)
{
	cout << *it << endl;
}
for (auto it = lst3.begin(); it != lst3.end(); ++it)
{
	cout << *it << endl;
}
return 0;
}
