#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;
int main()
{
vector<int> v = {0,1,2,3,4,5,6,7,8,9};
const int n = v.size();
int arr[n];
int i=0;
for (auto it=v.cbegin(); it!=v.cend(); ++it)
{
	arr[i] = *it;
	cout << arr[i] << " ";
	++i;
}
cout << endl;
return 0;
}
