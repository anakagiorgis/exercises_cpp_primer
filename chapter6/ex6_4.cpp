#include <iostream>
using std::cout; using std::endl;
void swap(int *p1, int *p2)
{
int temp = *p2;
*p2 = *p1;
*p1 = temp;
}
int main()
{
int n=7;
int m=8;
int *p1 = &n;
int *p2 = &m;
swap(p1,p2);
cout << n << " " << m << endl;
return 0;
}
