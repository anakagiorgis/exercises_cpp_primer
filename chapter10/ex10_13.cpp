#include "Sales_data.h"
#include <algorithm>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector; using std::sort;

int main()
{
vector<Sales_data> vec;
Sales_data input;
cout << "Enter 5 Sales_data objects" << endl;
for (int i=0; i!=5; ++i)
{
	read(cin, input);
	vec.push_back(input);
}
sort(vec.begin(), vec.end(), [] (Sales_data &a, Sales_data &b) { return a.isbn() < b.isbn(); });
for (int i=0; i!=5; ++i)
{
	print(cout, vec[i]) << endl;
}
return 0;
}
