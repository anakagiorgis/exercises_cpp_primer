#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr; using std::string;
struct Sales_data
{
string bookNo;
unsigned units_sold;
double revenue;
};
int main()
{
Sales_data buffBook, valBook;
double buffPrice, valPrice;
unsigned totalUnits;
double totalRevenue;
if (cin>>buffBook.bookNo>>buffBook.units_sold>>buffPrice)
{
buffBook.revenue = buffBook.units_sold * buffPrice;
totalUnits = buffBook.units_sold;
totalRevenue = buffBook.revenue;
while (cin>>valBook.bookNo>>valBook.units_sold>>valPrice)
{
valBook.revenue = valBook.units_sold * valPrice;
if (buffBook.bookNo == valBook.bookNo)
{
totalUnits += valBook.units_sold;
totalRevenue += valBook.revenue;
buffBook = valBook;
}
else
{
cout<<buffBook.bookNo<<" "<<totalUnits<<" "<<totalRevenue<<endl;
totalUnits = valBook.units_sold;
totalRevenue = valBook.revenue;
buffBook = valBook;
}
}
cout<<buffBook.bookNo<<" "<<totalUnits<<" "<<totalRevenue<<endl;
return 0;
}
else
{
cerr<<"No data to process"<<endl;
return -1;
}
}
