#include <iostream>
#include "Sales_data.h"
using std::cin; using std::cout;
using std::istream; using std::ostream;

istream &read(istream &is, Sales_data &item)
{
double price = 0;
is >> item.bookNo >> item.units_sold >> price;
item.revenue = price * item.units_sold;
return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
Sales_data sum = lhs;
sum.combine(rhs);
return sum;
}

int main()
{
Sales_data total;
unsigned count = 0;
if (read(cin, total))
{
	count += 1;
	Sales_data trans;
	while (read(cin, trans))
	{
		if (total.isbn() == trans.isbn())
		{
			count += 1;
			total.combine(trans);
		}
		else
		{
			print(cout, total) << " " << count << std::endl;
			count = 1;
			total = trans;
		}
	}
	print(cout, total) << " " << count << std::endl;
}
else
{
	std::cerr << "No data?!" << std::endl;
}
return 0;
}

