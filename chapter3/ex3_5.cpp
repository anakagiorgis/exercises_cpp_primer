#include <iostream>
using std::cin; using std::cout; using std::cerr; using std::endl; using std::string;
struct Sales_data
{
string bookNo;
unsigned units_sold;
double revenue;
};
int main()
{
Sales_data item1, item2;
double price1, price2;
cin>>item1.bookNo>>item1.units_sold>>price1;
cin>>item2.bookNo>>item2.units_sold>>price2;
item1.revenue = item1.units_sold * price1;
item2.revenue = item2.units_sold * price2;
if (item1.bookNo==item2.bookNo)
{
int totalUnits = item1.units_sold + item2.units_sold;
double totalRev = item1.revenue + item2.revenue;
cout<<item2.bookNo<<" "<<totalUnits<<" "<<totalRev<<endl;
return 0;
}
else
{
cerr<<"Incorrect data - data must refer to the same ISBN"<<endl;
return -1;
}
}
