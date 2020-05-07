#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;
int main()
{
int n;
vector<int> v;
int sum;
while (cin >> n)
{
v.push_back(n);
}
for (vector<int>::size_type i=0; i!=v.size(); ++i)
{
sum = v[i] + v[v.size()-1-i];
cout << sum << endl;
}
return 0;
}
