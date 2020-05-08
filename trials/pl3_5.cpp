#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;
int main()
{
string line;
while (getline(cin, line))
{
auto len = line.size();
if (len > 3)
{
cout << line << endl;
}
else
{
break;
}
}
return 0;
}
