#include <iostream>
int global_int;
int main()
{
int local_int;
std::cout<<global_int<<std::endl;
std::cout<<local_int<<std::endl;
return 0;
}
