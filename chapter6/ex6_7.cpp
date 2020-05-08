#include <iostream>
#include <string>
#include <cctype>
using std::cout; using std::endl; using std::string;

bool contains_capitals(const string& s)
{
bool ind = false;
for (string::size_type i=0; i!=s.size(); ++i)
{
	if (isupper(s[i]))
	{
		ind = true;
	}
	if (ind)
	{
		return ind;
	}
}
return ind;
}

int main()
{
const string str = "Hello, this is a string.";
const string &s = str;
bool has_capitals = contains_capitals(s);
cout << str << " " << has_capitals << endl;
return 0;
}
