#include <map>
#include <string>
#include <iostream>
using std::map; using std::cin; using std::cout; using std::endl;
using std::string;

int main()
{
string esc = "exit()";
map<string, size_t> word_count;
string word;
while (cin >> word)
{
	++word_count[word];
	if (word == esc)
	{
		break;
	}
}
for (const auto &w : word_count)
{
	cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
}
return 0;
}
