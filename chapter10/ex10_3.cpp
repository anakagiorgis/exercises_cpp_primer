#include <numeric>
#include <vector>
#include <iostream>
using std::cout; using std::endl; using std::vector;
using std::accumulate;
int main()
{
vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
int sum = accumulate(vec.begin(), vec.end(), 0);
cout << sum << endl;
return 0;
}
