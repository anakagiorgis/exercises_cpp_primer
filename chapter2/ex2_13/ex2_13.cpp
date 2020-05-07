#include <iostream>
#include "Sales_data.h"
int main()
{
Sales_data buffBook;
Sales_data valBook;
double buffPrice;
double valPrice;
unsigned totalUnits;
double totalRevenue;
if (std::cin>>buffBook.bookISBN>>buffBook.units_sold>>buffPrice)
{
buffBook.revenue=buffBook.units_sold*buffPrice;
totalRevenue=buffBook.revenue;
totalUnits=buffBook.units_sold;
while (std::cin>>valBook.bookISBN>>valBook.units_sold>>valPrice)
{
valBook.revenue=valBook.units_sold*valPrice;
if (buffBook.bookISBN==valBook.bookISBN)
{
totalUnits+=valBook.units_sold;
totalRevenue+=valBook.revenue;
buffBook=valBook;
}
else
{
std::cout<<buffBook.bookISBN<<" "<<totalUnits<<" "<<totalRevenue<<std::endl;
totalUnits=valBook.units_sold;
totalRevenue=valBook.revenue;
buffBook=valBook;
}
}
std::cout<<buffBook.bookISBN<<" "<<totalUnits<<" "<<totalRevenue<<std::endl;
return 0;
}
else
{
std::cerr<<"No data to process"<<std::endl;
return -1;
}
}
