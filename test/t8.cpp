#include <iostream>
int main()
{
int i, *const cp=&i;
int *p1, *const p2=&i;
const int *p3;
std::cout<<i<<std::endl;
std::cout<<cp<<std::endl;
std::cout<<p1<<std::endl;
std::cout<<p2<<std::endl;
std::cout<<p3<<std::endl;
return 0;
}
