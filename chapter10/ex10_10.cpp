#include <iostream>
using std::cin; using std::cout; using std::endl;
int main()
{
auto f = [] (int i, int j) { return i+j; };
int i, j;
cin >> i >> j;
cout << f(i, j) << endl;
return 0;
}
