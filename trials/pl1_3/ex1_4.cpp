#include <iostream>
#include "Sales_item.h"
int main()
{
int count=0;
Sales_item book;
Sales_item book2;
if (std::cin>>book)
{
++count;
while (std::cin>>book2)
{
if (book.isbn()==book2.isbn())
{
++count;
}
}
std::cout<<book<<" occurs "<<count<<" times."<<std::endl;
}
return 0;
}
