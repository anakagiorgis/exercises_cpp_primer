#include <iostream>
#include <typeinfo>
int main()
{
int a=3, b=4;
decltype(a) c=a;
decltype((b)) d=a;
++c;
++d;
std::cout<<a<<" has type "<<typeid(a).name()<<std::endl;
std::cout<<b<<" has type "<<typeid(b).name()<<std::endl;
std::cout<<c<<" has type "<<typeid(c).name()<<std::endl;
std::cout<<d<<" has type "<<typeid(d).name()<<std::endl;
return 0;
}
