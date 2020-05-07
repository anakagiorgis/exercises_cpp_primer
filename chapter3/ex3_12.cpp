#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::endl; using std::string;
int main()
{
string s1, s2;
cin >> s1 >> s2;
auto len1 = s1.size();
auto len2 = s2.size();
if (len1 == len2)
{
cout << "The two strings have the same length" << endl;
}
else if (len1 > len2)
{
cout << "The first string is longer" << endl;
}
else if (len2 > len1)
{
cout << "The second string is longer" << endl;
}
return 0;
}
