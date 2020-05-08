#include <iostream>
using std::cout; using std::endl;

void swap(int &i, int &j)
{
int temp = j;
j = i;
i = temp;
}

int main()
{
int n = 7, m = 8;
cout << "n and m are " << n << " " << m << endl;
int &i=n, &j=m;
swap(i,j);
cout << "n and m are now " << n << " " << m << endl;
return 0;
}
