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
unsigned ISBN_count=0;
if (std::cin>>buffBook.bookNo>>buffBook.units_sold>>buffPrice)
{
buffBook.revenue=buffBook.units_sold*buffPrice;
++ISBN_count;
while (std::cin>>valBook.bookNo>>valBook.units_sold>>valPrice)
{
valBook.revenue=valBook.units_sold*valPrice;
if (buffBook.bookNo==valBook.bookNo)
{
++ISBN_count;
buffBook=valBook;
}
else
{
std::cout<<"Book "<<buffBook.bookNo<<" occurs "<<ISBN_count<<" times."<<std::endl;
ISBN_count=1;
buffBook=valBook;
}
}
std::cout<<"Book "<<buffBook.bookNo<<" occurs "<<ISBN_count<<" times."<<std::endl;
return 0;
}
else
{
std::cerr<<"No data to process"<<std::endl;
return -1;
}
}
