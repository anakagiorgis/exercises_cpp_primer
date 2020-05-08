#include <iostream>
#include "Sales_item.h"
int main()
{
Sales_item sum;
Sales_item book;
Sales_item book2;
if (std::cin>>book)
{
sum+=book;
while (std::cin>>book2)
{
if (book.isbn()==book2.isbn())
{
sum+=book2;
book=book2;
}
}
std::cout<<sum<<std::endl;
}
return 0;
}
