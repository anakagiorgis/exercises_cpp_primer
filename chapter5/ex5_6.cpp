#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string; using std::vector;
int main()
{
string currWord;
string nextWord;
vector<string> repeatedWords;
vector<int>  countWords;
int count = 1;
cin >> currWord;
while (1)
{
	cin >> nextWord;
	if (currWord == nextWord)
	{
		++count;
		currWord = nextWord;
	}
	else
	{
		repeatedWords.push_back(currWord);
		countWords.push_back(count);
		count = 1;
		currWord = nextWord;
	}
	if (nextWord == "escape")
	{
		break;
	}
}
int maxNo = countWords[0];
string maxWord = repeatedWords[0];
for (vector<int>::size_type i = 1; i != countWords.size(); ++i)
{
	if (countWords[i] >= maxNo)
	{
		maxNo = countWords[i];
		maxWord = repeatedWords[i];
	}
}
if (maxNo == 1)
{
	cout << "No word is repeated" << endl;
}
else if (maxNo > 1)
{
	cout << "The word " << maxWord << " occurred " << maxNo << " times" << endl;
}
return 0;
}
