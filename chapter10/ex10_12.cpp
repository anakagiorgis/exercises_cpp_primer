#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;
using std::sort; using std::unique;
using std::stable_sort; using std::find_if;
using std::for_each;

void elimDups(vector<string> &words)
{
sort(words.begin(), words.end());
auto end_unique = unique(words.begin(), words.end());
words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
elimDups(words);
stable_sort(words.begin(), words.end(), [] (const string &a, const string &b) { return a.size() < b.size(); });
auto wc = find_if(words.begin(), words.end(), [sz] (const string &a) { return a.size() >= sz; });
auto count = words.end() - wc;
cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
for_each(wc, words.end(), [] (const string &s) { cout << s << " "; });
cout << endl;
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
biggies(words, 5);
return 0;
}
