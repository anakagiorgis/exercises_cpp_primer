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
if (cin>>buffBook.bookNo>>buffBook.units_sold>>buffPrice)
{
buffBook.revenue = buffBook.units_sold * buffPrice;
cout<<buffBook.bookNo<<" "<<buffBook.units_sold<<" "<<buffBook.revenue<<endl;
while (cin>>valBook.bookNo>>valBook.units_sold>>valPrice)
{
valBook.revenue = valBook.units_sold * valPrice;
cout<<valBook.bookNo<<" "<<valBook.units_sold<<" "<<valBook.revenue<<endl;
}
return 0;
}
else
{
cerr<<"No data to process"<<endl;
return -1;
}
}
