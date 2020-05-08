#include <list>
#include <iostream>
#include <algorithm>
using std::cout; using std::endl; using std::list; using std::find;

int main()
{
list<int> l = {1,0,1,2,3,0,1,1,0,2};
auto result = find(l.rbegin(), l.rend(), 0);
cout << "The value 0" << (result == l.rbegin() ? " is not present" : " is present") << endl;
int i=0;
for (auto it = l.rbegin(); it != l.rend(); ++it)
{
	if ( it == result )
	{
		cout << "The value 0 is " << i << " positions from the end" << endl;
	}
	++i;
}
return 0;
}
