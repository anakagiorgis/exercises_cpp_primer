#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;

void binary_search(double sought, vector<double> vec)
{
auto beg = vec.begin();
auto end = vec.end();
auto mid = vec.begin() + (end - beg)/2;
while (mid != end && *mid != sought)
{
	if (sought < *mid)
	{
		end = mid;
	}
	else
	{
		beg = mid + 1;
	}
	mid = beg + (end - beg)/2;
}
auto position = mid - vec.begin();
cout << "Sought double is in position " << position << " and is equal to " << *mid << endl;
}

int main()
{
vector<double> v = {1,3,5,7,9,11,13,15,17,19,21};
double s = 7;
binary_search(s, v);
return 0;
}
