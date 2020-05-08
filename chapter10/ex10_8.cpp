#include "Sales_data.h"
#include <algorithm>
#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::sort; using std::vector;
using std::endl;

bool compareIsbn(Sales_data &item1, Sales_data &item2)
{
return item1.isbn() < item2.isbn();
}

int main()
{
Sales_data input;
vector<Sales_data> vec;
cout << "Please insert 5 Sales_data objects" << endl;
for (int i=0; i!=5; ++i)
{
	read(cin, input);
	vec.push_back(input);
}
sort(vec.begin(), vec.end(), compareIsbn);
for (const auto &s : vec)
{
	print(cout, s) << endl;
}
return 0;
}
