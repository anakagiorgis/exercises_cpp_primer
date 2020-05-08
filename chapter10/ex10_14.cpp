#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
int i;
cin >> i;
auto f = [i] () mutable {
(i > 0) ? --i : i;
return (i==0);
};
cout << f() << endl;
return 0;
}
