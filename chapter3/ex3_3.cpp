#include <iostream>
using std::cout; using std::endl; using std::cin;
int main()
{
int i,j;
cin>>i>>j;
int k;
if (i<j)
{
k=i;
while (k<=j)
{
cout<<k<<endl;
++k;
}
}
else if (j<i)
{
k=j;
while (k<=i)
{
cout<<k<<endl;
++k;
}
}
else
{
cout<<"There is no range between these two integers"<<endl;
}
return 0;
}
