#include <vector>
#include <cctype>
#include <map>
#include <set>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
ifstream in("file.txt");
vector<string> file;
map<string, set<int>> wm;
string line;
string word;
int i=1;
while (getline(in, line))
{
	file.push_back(line);
	istringstream record(line);
	while (record >> word)
	{
		int j = 0;
		for (auto c : word)
		{
			if (ispunct(c))
			{
				word.erase(word.begin() + j);
			}
			else if (isupper(c))
			{
				c = tolower(c);
			}
		++j;
		}
		wm[word];
		wm[word].insert(i);
	}
	++i;
}
cout << "Query a word" << endl;
string sought;
cin >> sought;
auto loc = wm.find(sought);
if (loc == wm.end())
{
	cout << sought << " does not occur." << endl;
}
else
{
	cout << sought << " occurs " << wm[sought].size() << (wm[sought].size() > 1 ? " times." : " time.") << endl;
	auto set = wm[sought];
	for (auto it = set.begin(); it != set.end(); ++it)
	{
		cout << "(line " << *it << ")" << file[*it - 1] << endl;
	}
}
in.close();
return 0;
}
