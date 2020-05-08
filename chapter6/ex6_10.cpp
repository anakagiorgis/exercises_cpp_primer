#include <iostream>
using std::cout; using std::endl;

void swap(int* p1, int* p2)
{
int temp = *p2;
*p2 = *p1;
*p1 = temp;
}

int main()
{
int i=7, j=8;
int *p1 = &i;
int *p2 = &j;
cout << "i and j are " << *p1 << " " << *p2 << endl;
swap(p1, p2);
cout << "i and j are " << *p1 << " " << *p2 << endl;
return 0;
}
