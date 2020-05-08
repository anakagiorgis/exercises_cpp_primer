#include <cassert>
#include <iostream>
#include "Chapter6.h"
using std::cin; using std::cout; using std::endl;
int main()
{
int n;
cout << "Please insert an integer" << endl;
cin >> n;
assert (fact(5)==120);
cout << "The factorial of that integer is " << fact(n) << endl;
return 0;
}
