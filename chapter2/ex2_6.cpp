#include <iostream>
int main()
{
int i=0, &r=i;
auto a=r;
const int ci=i, &cr=ci;
auto b=ci;
auto c=cr;
a=42;
b=42;
c=42;
std::cout<<a<<" "<<b<<" "<<c<<std::endl;
return 0;
}
