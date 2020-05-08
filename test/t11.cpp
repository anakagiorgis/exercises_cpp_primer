#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;
int main()
{
vector<int> v1;
for (int i=0; i!=100; ++i)
{
v1.push_back(i);
}
for (int i=0; i!=100; ++i)
{
cout << v1[i] << endl;
}
return 0;
}
