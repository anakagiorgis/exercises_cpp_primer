#include <map>
#include <string>
#include <cctype>
#include <iostream>
#include <algorithm>
using std::cin; using std::cout; using std::endl;
using std::string; using std::map; using std::remove;

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
	for (auto &c : word)
	{
		if (isupper(c))
		{
			c = tolower(c);
		}
		else if (ispunct(c))
		{
			word.erase(remove(word.begin(), word.end(), c), word.end());
		}
	}
	++word_count[word];
}
for (const auto &w : word_count)
{
	cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
}
return 0;
}
