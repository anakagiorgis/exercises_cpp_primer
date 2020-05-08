#include <iostream>
int get_size()
{
return 42;
}
int main()
{
const int i=get_size();
std::cout<<i<<std::endl;
return 0;
}
