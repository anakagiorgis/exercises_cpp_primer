#include <vector>
#include <fstream>
#include <iostream>

int main()
{
std::ifstream in("document.txt");
std::vector<std::string> document;
std::string word;
while (in >> word)
{
	document.push_back(word);
}
for (auto it = document.begin(); it != document.end(); ++it)
{
	std::cout << *it << std::endl;
}
return 0;
}
