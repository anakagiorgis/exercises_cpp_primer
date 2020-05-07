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
Sales_data buffBook;
Sales_data valBook;
double buffPrice;
double valPrice;
int totalUnits;
double totalRevenue;
if (std::cin>>buffBook.bookNo>>buffBook.units_sold>>buffPrice)
{
buffBook.revenue=buffBook.units_sold*buffPrice;
totalUnits=buffBook.units_sold;
totalRevenue=buffBook.revenue;
while (std::cin>>valBook.bookNo>>valBook.units_sold>>valPrice)
{
valBook.revenue=valBook.units_sold*valPrice;
if (buffBook.bookNo==valBook.bookNo)
{
totalUnits+=valBook.units_sold;
totalRevenue+=valBook.units_sold*valPrice;
buffBook=valBook;
}
else
{
std::cout<<buffBook.bookNo<<" "<<totalUnits<<" "<<totalRevenue<<std::endl;
buffBook=valBook;
totalUnits = valBook.units_sold;
totalRevenue = valBook.revenue;
}
}
std::cout<<buffBook.bookNo<<" "<<totalUnits<<" "<<totalRevenue<<std::endl;
return 0;
}
else
{
std::cerr<<"No data to process"<<std::endl;
return -1;
}
}

