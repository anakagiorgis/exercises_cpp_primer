#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;

void print_vector(vector<int> v, int n)
{
cout << v[n] << endl;
if (n < v.size() - 1)
{
	print_vector(v, n+1);
}
}

int main()
{
vector<int> v = {0,1,2,3,4,5,6,7,8,9,10};
print_vector(v, 0);
return 0;
}
