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
for (auto it = v.begin(); it != v.end()-1; ++it)
{
	auto it2 = it + 1;
	sum = (*it) + (*it2);
	cout << sum << endl;
}
return 0;
}
