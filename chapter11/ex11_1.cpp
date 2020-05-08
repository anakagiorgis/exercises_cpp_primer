#include <map>
#include <string>
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::string;
using std::map;

int main()
{
string esc = "exit()";
map<string, size_t> word_count;
string word;
while (cin >> word)
{
	if (word == esc)
	{
		break;
	}
	++word_count[word];
}
for (const auto &w : word_count)
{
	cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
}
return 0;
}
