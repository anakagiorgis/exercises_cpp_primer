#include "Sales_data.h"
int main()
{
Sales_data data1;
Sales_data data2("001-X-111");
Sales_data data3("001-X-111", 5, 1.5);
print(std::cout, data1) << std::endl;
print(std::cout, data2) << std::endl;
print(std::cout, data3) << std::endl;
Sales_data data4(std::cin);
print(std::cout, data4) << std::endl;
return 0;
}
