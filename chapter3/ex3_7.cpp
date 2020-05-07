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
unsigned cnt = 0;
if (cin>>buffBook.bookNo>>buffBook.units_sold>>buffPrice)
{
++cnt;
while (cin>>valBook.bookNo>>valBook.units_sold>>valPrice)
{
if (buffBook.bookNo == valBook.bookNo)
{
++cnt;
buffBook = valBook;
}
else
{
cout<<buffBook.bookNo<<" occurs "<<cnt<<" times."<<endl;
cnt = 1;
buffBook = valBook;
}
}
cout<<buffBook.bookNo<<" occurs "<<cnt<<" times."<<endl;
return 0;
}
else
{
cerr<<"No data to process"<<endl;
return -1;
}
}
