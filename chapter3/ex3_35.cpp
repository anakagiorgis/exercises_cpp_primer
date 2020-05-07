#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;
int main()
{
string sentence1;
string sentence2;
string s1;
string s2;
cout << "Please enter 5 words" << endl;
for (size_t i=0; i!=5; ++i)
{
	cin >> s1;
	sentence1 = sentence1 + s1 + " ";
}
cout << "Please enter 5 more words" << endl;
for (size_t i=0; i!=5; ++i)
{
	cin >> s2;
	sentence2 = sentence2 + s2 + " ";
}
if (sentence1 < sentence2)
{
	cout << "First string smaller than the second" << endl;
}
else if (sentence1 > sentence2)
{
	cout << "First string larger than the second" << endl;
}
else if (sentence1 == sentence2)
{
	cout << "First string equal to the second" << endl;
}
return 0;
}
