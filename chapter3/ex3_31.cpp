#include <iostream>
using std::cout; using std::endl; using std::begin; using std::end;
int main()
{
int ia[] = {0,1,2,3,4,5,6,7,8,9};
int *p1 = begin(ia) + (end(ia)-begin(ia))/2;
int *p2 = end(ia);
p1 += p2 - p1;
cout << *p1 << endl;
return 0;
}

