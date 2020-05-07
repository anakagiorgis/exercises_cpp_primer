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
Sales_data total;
double totalPrice;
if (cin>>total.bookNo>>total.units_sold>>totalPrice)
{
Sales_data trans;
double transPrice;
unsigned totalUnits;
double totalRevenue;
double avgPrice;
total.revenue = total.units_sold * totalPrice;
totalUnits = total.units_sold;
totalRevenue = total.revenue;
avgPrice = totalPrice;
while (cin>>trans.bookNo>>trans.units_sold>>transPrice)
{
trans.revenue = trans.units_sold * transPrice;
if (total.bookNo == trans.bookNo)
{
avgPrice = (avgPrice + transPrice)/2;
totalUnits += trans.units_sold;
totalRevenue += trans.revenue;
total = trans;
}
else
{
cout<<total.bookNo<<" "<<totalUnits<<" "<<avgPrice<<" "<<totalRevenue<<endl;
totalUnits = trans.units_sold;
totalRevenue = trans.revenue;
avgPrice = transPrice;
total = trans;
}
}
cout<<total.bookNo<<" "<<totalUnits<<" "<<avgPrice<<" "<<totalRevenue<<endl;
}
else
{
cerr<<"No data to process"<<endl;
return -1;
}
return 0;
}
