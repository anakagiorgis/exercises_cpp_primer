#include <iostream>
#include "Sales_item.h"
int main()
{
Sales_item book;
Sales_item book2;
int cnt=0;
if (std::cin>>book)
{
++cnt;
while (std::cin>>book2)
{
if (book.isbn()==book2.isbn())
{
++cnt;
book=book2;
}
else
{
std::cout<<book<<" occurs "<<cnt<<" times"<<std::endl;
book=book2;
cnt=1;
}
}
}
return 0;
}
