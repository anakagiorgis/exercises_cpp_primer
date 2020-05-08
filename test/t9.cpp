#include <iostream>
#include <typeinfo>
int main()
{
int a=3, b=4;
decltype(a) c=a;
decltype(a=b) d=a;
std::cout<<typeid(c).name()<<std::endl;
std::cout<<typeid(d).name()<<std::endl;
return 0;
}
