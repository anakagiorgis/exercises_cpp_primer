#include <iostream>
int main()
{
const int i=-1, &r=0;
std::cout<<i<<std::endl;
std::cout<<r<<std::endl;
int j=-1, &q=0;
std::cout<<j<<std::endl;
std::cout<<q<<std::endl;
return 0;
}
