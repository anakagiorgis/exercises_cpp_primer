#include <iostream>
using std::cout; using std::endl;
int main()
{
int sum=0;
int i=50;
while (i<101)
{
sum+=i;
++i;
}
cout<<"Sum of 50 to 100 inclusive is "<<sum<<endl;
return 0;
}
