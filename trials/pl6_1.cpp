#include <iostream>
#include <string>
using std::cout; using std::cin; using std::string; using std::endl;

string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
auto ret = s.size();
occurs = 0;
for (decltype(ret) i=0; i!=s.size(); ++i)
{
	if (s[i]==c)
	{
		if (ret==s.size())
		{
			ret = i;
		}
		++occurs;
	}
}
return ret;
}

int main()
{
string str = "Hello, this is a sentence.";
const string &s = str;
char c = 'e';
string::size_type oc = 0;
string::size_type &occurs = oc;
string::size_type ret = find_char(s, c, occurs);
cout << "Character " << c << " occurs in string " << s << " " << occurs << " times, and the first position is position " << ret << endl;
return 0;
}
