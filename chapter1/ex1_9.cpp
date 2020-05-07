#include <iostream>

int* read(int n)
{
int* integers[n];
for (int i=0; i<n; ++i)
{
std::cin>>integers[i]>>std::endl;
}
return integers;
}

int main()
{
int n;
std::cin>>n>>std::endl;
int* integers=read(n);
for (int i=0; i<n; ++i)
{
std::cout<<integers[i]<<std::endl;
}
return 0;
}
