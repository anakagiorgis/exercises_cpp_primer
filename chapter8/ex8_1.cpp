#include <iostream>
using std::istream; using std::cin;

istream& func(istream &s)
{
std::string line;
while (!s.eof())
{
	getline(s, line);
	std::cout << line << std::endl;
}
s.clear();
return s;
}

int main()
{
func(cin);
return 0;
}
