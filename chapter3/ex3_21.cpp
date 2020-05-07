#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::cin; using std::cout; using std::endl; using std::string; using std::vector;
int main()
{
string word;
string esc_string = "Esc";
vector<string> v;
while (cin >> word)
{
if (word != esc_string)
{
v.push_back(word);
}
else
{
break;
}
}
for (vector<string>::size_type i=0; i!=v.size(); ++i)
{
for (auto &c : v[i])
{
c = toupper(c);
}
}
for (vector<string>::size_type i=0; i!=v.size(); ++i)
{
cout << v[i] << " ";
if (i%7==0 && i>0)
{
cout << endl;
}
}
return 0;
}
