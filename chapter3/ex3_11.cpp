#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;
int main()
{
string s1, s2;
cin >> s1 >> s2;
if (s1 == s2)
{
cout << "The two strings are equal" << endl;
}
else if (s1 > s2)
{
cout << "The first string is larger" << endl;
}
else if (s2 > s1)
{
cout << "The second string is larger" << endl;
}
return 0;
}
