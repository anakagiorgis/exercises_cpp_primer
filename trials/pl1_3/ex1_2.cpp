#include <iostream>
#include "Sales_item.h"
int main()
{
Sales_item book1;
Sales_item book2;
if (std::cin>>book1)
{
if (std::cin>>book2)
{
if (book1.isbn()==book2.isbn())
{
std::cout<<book1+book2<<std::endl;
}
}
}
return 0;
}
