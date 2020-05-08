#include <iostream>
using std::cout; using std::endl;

void reset(int &i)
{
i = 0;
}

int main()
{
int n = 15;
cout << "n is " << n << endl;
int &i = n;
reset(i);
cout << "n is now " << n << endl;
return 0;
}
