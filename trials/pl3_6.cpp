#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;
int main()
{
string s1 = "hello, ", s2 = "world\n";
s1 += s2;
cout << s1 << endl;
return 0;
}
