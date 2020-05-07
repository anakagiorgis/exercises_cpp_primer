#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::string; using std::vector;
int main()
{
string s;
string esc_string = "Esc";
vector<string> v;
while (cin >> s)
{
if (s == esc_string)
{
break;
}
v.push_back(s);
}
for (vector<string>::size_type i=0; i!=v.size(); ++i)
{
cout << v[i] << " ";
}
cout << endl;
return 0;
}
