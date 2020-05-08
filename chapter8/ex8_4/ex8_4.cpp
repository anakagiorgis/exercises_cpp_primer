#include <vector>
#include <fstream>
#include <string>
#include <iostream>
int main()
{
std::ifstream in("document.txt");
std::vector<std::string> document;
std::string line;
while (getline(in, line))
{
	document.push_back(line);
}
for (auto it = document.begin(); it != document.end(); ++it)
{
	std::cout << *it << std::endl;
}
return 0;
}
