#include <iostream>
#include <string>
using std::cout; using std::endl; using std::string;
int main()
{
string s("some string");
for (auto it = s.cbegin(); it != s.cend(); ++it)
{
	cout << *it << endl;
}
return 0;
}
