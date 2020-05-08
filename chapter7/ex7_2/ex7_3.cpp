#include <iostream>
#include "Sales_data.h"
using std::cin; using std::cout; using std::endl; using std::cerr;
int main()
{
Sales_data total;
double totalPrice;
unsigned count = 0;
if (cin >> total.bookNo >> total.units_sold >> totalPrice)
{
	count += 1;
	total.revenue = totalPrice * total.units_sold;
	Sales_data trans;
	double transPrice;
	while (cin >> trans.bookNo >> trans.units_sold >> transPrice)
	{
		trans.revenue = transPrice * trans.units_sold;
		if (total.isbn() == trans.isbn())
		{
			count += 1;
			total.combine(trans);
		}
		else
		{
			cout << total.isbn() << " " << total.units_sold << " " << total.revenue << " " << count << endl;
			total = trans;
			count = 1;
		}
	}
	cout << total.isbn() << " " << total.units_sold << " " << total.revenue << " " << count << endl;
}
else
{
	cerr << "No data?!" << endl;
}
return 0;
}
