#include <algorithm>
#include <vector>
#include <iostream>
using std::cout; using std::endl; using std::vector; using std::count;
int main()
{
vector<int> v = {1,4,4,3,5,4,8,8,2};
int cnt = count(v.begin(), v.end(), 4);
cout << "The value 4 appears " << cnt << " times." << endl;
return 0;
}
