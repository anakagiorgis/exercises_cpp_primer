#include <vector>
#include <iostream>
using std::cout; using std::endl; using std::vector;

int main()
{
vector<int> v = {1,2,3,4,5,6,7,8,9,10};
for (auto it = v.end()-1; it != v.begin()-1; --it)
{
	cout << *it << endl;
}
return 0;
}
