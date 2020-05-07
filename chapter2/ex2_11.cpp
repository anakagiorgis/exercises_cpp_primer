#include <iostream>
#include <string>
struct Sales_data
{
std::string bookNo;
unsigned units_sold;
double revenue;
};
int main()
{
Sales_data book1;
Sales_data book2;
double price1;
double price2;
std::cin>>book1.bookNo>>book1.units_sold>>price1;
std::cin>>book2.bookNo>>book2.units_sold>>price2;
book1.revenue=book1.units_sold*price1;
book2.revenue=book2.units_sold*price2;
if (book1.bookNo==book2.bookNo)
{
unsigned totalUnits=book1.units_sold+book2.units_sold;
double totalRevenue=book1.revenue+book2.revenue;
std::cout<<book2.bookNo<<" "<<totalUnits<<" "<<totalRevenue<<std::endl;
return 0;
}
else
{
std::cerr<<"Data must refer to same ISBN"<<std::endl;
return -1;
}
}

