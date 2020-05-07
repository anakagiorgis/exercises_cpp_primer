#include <iostream>
int main()
{
// Change the value of a pointer
int ival=42;
int *p=&ival;
int jval=30;
p=&jval;
std::cout<<*p<<std::endl;
// end
// Change the value to which
// the pointer points
int kval=42;
int *q=&kval;
*q=30;
std::cout<<*q<<std::endl;
// end
return 0;
}
