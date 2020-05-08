#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
int main()
{
std::vector<std::string> document;
std::ifstream in("document.txt");
std::string line;
while (getline(in, line))
{
	document.push_back(line);
}
std::string word;
for (auto it = document.begin(); it != document.end(); ++it)
{
	std::istringstream record(*it);
	while (record >> word)
	{
		std::cout << word << std::endl;
	}
}
return 0;
}
