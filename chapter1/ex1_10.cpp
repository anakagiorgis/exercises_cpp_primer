#include <iostream>
int main()
{
int a;
int b;
if (std::cin>>a>>b)
{
if (a<b)
{
for (int i=a; i<=b; ++i)
{
std::cout<<i<<std::endl;
}
}
else
{
std::cout<<"first number must be smaller than the second."<<std::endl;
}
}
return 0;
}
