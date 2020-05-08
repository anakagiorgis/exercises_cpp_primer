#include <iterator>
#include <algorithm>
#include <vector>
#include <iostream>
using std::cout; using std::endl;
using std::fill_n; using std::back_inserter;
using std::vector;
int main()
{
vector<int> vec;
fill_n(back_inserter(vec), 10, 0);
for (auto it = vec.begin(); it != vec.end(); ++it)
{
	cout << *it << endl;
}
return 0;
}
