#include <iostream>
#include <cctype>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;
int main()
{
string s;
string result;
cout << "Please enter a string:" << endl;
cin >> s;
for (string::size_type index = 0; index != s.size(); ++index)
{
if (!ispunct(s[index]))
{
result += s[index];
}
}
cout << result << endl;
return 0;
}
