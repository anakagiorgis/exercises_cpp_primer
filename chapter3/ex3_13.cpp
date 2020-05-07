#include <iostream>
#include <string>
using std::cin; using std::cout; using std::string; using std::endl;
int main()
{
string s1, s2;
cin >> s1 >> s2;
s1 += s2;
cout << s1 << endl;
return 0;
}
