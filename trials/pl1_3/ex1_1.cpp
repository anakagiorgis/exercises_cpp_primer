#include <iostream>
#include "Sales_item.h"
int main()
{
Sales_item book;
Sales_item book2;
if (std::cin>>book)
{
std::cout<<book<<std::endl;
while (std::cin>>book2)
{
std::cout<<book2<<std::endl;
}
}
return 0;
}
