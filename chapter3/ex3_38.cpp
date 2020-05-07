#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector; using std::begin; using std::end;
int main()
{
int arr[] = {0,1,2,3,4,5,6,7,8,9};
vector<int> v(begin(arr),end(arr));
for (auto it = v.cbegin(); it != v.cend(); ++it)
{
	cout << *it << " ";
}
cout << endl;
return 0;
}
