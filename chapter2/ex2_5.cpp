#include <iostream>
int main()
{
int *ip, i, &r=i;
std::cout<<*ip<<std::endl;
std::cout<<i<<std::endl;
std::cout<<&r<<std::endl;
int j, *jp=0;
std::cout<<j<<std::endl;
std::cout<<*jp<<std::endl;
return 0;
}
