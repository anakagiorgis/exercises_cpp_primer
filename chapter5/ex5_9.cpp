#include <iostream>
#include <stdexcept>
using std::cin; using std::cout; using std::endl; using std::runtime_error;
int main()
{
int n, m, res;
cout << "Please enter two integers" << endl;
cin >> n >> m;
if (m == 0)
{
	throw runtime_error("The second number cannot be zero");
}
res = n / m;
cout << res << endl;
return 0;
}
