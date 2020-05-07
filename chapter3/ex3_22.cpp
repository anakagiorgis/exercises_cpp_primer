#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;
int main()
{
int n;
vector<int> v;
while (cin >> n)
{
v.push_back(n);
}
int sum;
for (vector<int>::size_type i=0; i!=v.size()-1; ++i)
{
sum = v[i] + v[i+1];
cout << sum << endl;
}
return 0;
}
