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
double buffPrice=0;
double valPrice=0;
if (std::cin>>buffBook.bookNo>>buffBook.units_sold>>buffPrice)
{
buffBook.revenue=buffBook.units_sold*buffPrice;
std::cout<<buffBook.bookNo<<" "<<buffBook.units_sold<<" "<<buffBook.revenue<<std::endl;
while (std::cin>>valBook.bookNo>>valBook.units_sold>>valPrice)
{
valBook.revenue=valBook.units_sold*valPrice;
std::cout<<valBook.bookNo<<" "<<valBook.units_sold<<" "<<valBook.revenue<<std::endl;
}
return 0;
}
else
{
std::cerr<<"No data to process"<<std::endl;
return -1;
}
}
