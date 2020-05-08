#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector; using std::partition;

bool fiveOrMore(const string &s)
{
return s.size() >= 5;
}

int main()
{
vector<string> words;
string word;
for (int i=0; i!=10; ++i)
{
	cin >> word;
	words.push_back(word);
}
auto it_end = partition(words.begin(), words.end(), fiveOrMore);
for (auto it = words.begin(); it != it_end; ++it)
{
	cout << *it << " ";
}
cout << endl;
return 0;
}
