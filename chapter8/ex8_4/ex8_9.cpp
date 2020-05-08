#include <iostream>
#include <sstream>
#include <fstream>
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
std::ifstream in("document.txt");
std::string line;
getline(in, line);
std::istringstream first_line(line);
func(first_line);
return 0;
}
