#include "Sales_data.h"
using std::cin; using std::cout; using std::endl; using std::cerr;
int main()
{
Sales_data total(cin);
while (1)
{
	Sales_data trans(cin);
	if (total.isbn() == trans.isbn())
	{
		total.combine(trans);
	}
	else if (trans.isbn() == "l")
	{
		break;
	}
	else
	{
		print(cout, total) << endl;
		total = trans;
	}
	print(cout, total) << endl;
}
return 0;
}
