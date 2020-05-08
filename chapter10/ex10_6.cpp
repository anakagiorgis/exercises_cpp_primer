#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::sort; using std::unique; using std::string; using std::vector;

void elimDups(vector<string> &words)
{
sort(words.begin(), words.end());
auto end_unique = unique(words.begin(), words.end());
words.erase(end_unique, words.end());
}

int main()
{
vector<string> words;
string word;
cout << "Please insert 10 words" << endl;
for (int i=0; i!=10; ++i)
{
	cin >> word;
	words.push_back(word);
}
elimDups(words);
for (auto it = words.begin(); it != words.end(); ++it)
{
	cout << *it << endl;
}
return 0;
}
