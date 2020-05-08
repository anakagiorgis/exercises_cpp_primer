#include <iostream>
#include <string>
using namespace std;
class Foo
{
public:
	Foo(string s=""):a(s) { }
	string a;
};
int main()
{
	string s="A";
	Foo bar(s);
	cout << bar.a << endl;
};
