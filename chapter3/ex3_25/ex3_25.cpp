#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::string; using std::vector; using std::ifstream;

int main()
{
vector<string> text;
string s;
string sentence;
ifstream input("essay.txt");
int punct_id;
for (string line; getline(input, line);)
{
	punct_id = 0;
	for (auto c : line)
	{
		if (c=='.' || c=='?' || c=='!')
		{
			punct_id = 1;
		}
	}
	if (punct_id == 1)
	{
		text.push_back(line);
	}
	if (line.empty())
	{
		text.push_back(line);
	}
}
for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
{
	for (auto &c : *it)
	{
		c = toupper(c);
	}
}
for (auto it = text.cbegin(); it != text.cend(); ++it)
{
	if (!it->empty())
	{
		cout << *it << " ";
	}
	else if (it->empty())
	{
		cout << endl;
		cout << endl;
	}
}
cout << endl;
return 0;
}
