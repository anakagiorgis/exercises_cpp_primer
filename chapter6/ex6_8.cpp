#include <iostream>
#include <string>
#include <cctype>
using std::cin; using std::endl; using std::cout; using std::string;

string& change_to_lowercase(string& s)
{
for (string::size_type i=0; i!=s.size(); ++i)
{
	s[i] = tolower(s[i]);
}
return s;
}

int main()
{
string str = "aNAmaRtWs";
string &s = str;
cout << s << endl;
s = change_to_lowercase(s);
cout << s << endl;
return 0;
}
