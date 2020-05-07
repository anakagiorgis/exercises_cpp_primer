#include <iostream>
#include <string>
#include <cctype>
using std::cin; using std::cout; using std::endl; using std::string;
int main()
{
string s;
cout << "Please enter a string: " << endl;
cin >> s;
for (auto &c : s)
{
c = 'X';
}
cout << s << endl;
return 0;
}
