#include <numeric>
#include <vector>
#include <iostream>
using std::cout; using std::endl;
using std::vector; using std::accumulate;
int main()
{
vector<double> vec = {1.3, 2.5, 3.4, 4.1, 5.7};
double sum = accumulate(vec.begin(), vec.end(), 0.0);
cout << sum << endl;
return 0;
}
