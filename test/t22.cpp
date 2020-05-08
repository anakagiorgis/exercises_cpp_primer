#include <iostream>
#include <string>
using namespace std;
class Foo
{
public:
	Foo(string s=""): a(s) { }
	string a;
};



int main()
{
	Foo bar;
	cout << bar.a << endl;
	Foo baz;
	baz.a = "Hello";
	cout << baz.a << endl;
	Foo baq("Again");
	cout << baq.a << endl;
	return 0;
}
