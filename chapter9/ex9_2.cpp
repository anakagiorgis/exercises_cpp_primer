#include <vector>
#include <iostream>
using std::vector;

bool find(vector<int>::iterator it1, vector<int>::iterator it2, int i)
{
bool indicator = false;
for (auto it = it1; it != it2; ++it)
{
	if (*it == i)
	{
		indicator = true;
	}
}
return indicator;
}

int main()
{
vector<int> v = {1,2,3,4,5,6,7,8,9,10};
int i = 5;
bool is_it = find(v.begin(), v.end(), i);
std::cout << i << " " << is_it << std::endl;
return 0;
}
