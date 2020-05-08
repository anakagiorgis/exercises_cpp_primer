#include <iostream>
#include <string>
using std::string; using std::cout; using std::endl;

string (&func(int i))[10]
{
string s[10] = {"one","two","three","four","five","six","seven","eight","nine","ten"};
string (&str)[10] = s;
return str;
}

int main()
{
string (&str)[10] = func(1);
string s[10] = str;
for (size_t i=0; i!=10; ++i)
{
	cout << s[i] << endl;
}
return 0;
}
