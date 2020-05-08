#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using std::cin; using std::cout; using std::stable_sort;
using std::endl; using std::vector; using std::string;
using std::sort; using std::unique;

void elimDups(vector<string> &words)
{
sort(words.begin(), words.end());
auto end_unique = unique(words.begin(), words.end());
words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2)
{
return s1.size() < s2.size();
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
elimDups(words);
stable_sort(words.begin(), words.end(), isShorter);
for (const auto &s : words)
{
	cout << s << " ";
}
cout << endl;
return 0;
}
