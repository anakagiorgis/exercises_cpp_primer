#include <iterator>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using std::istream_iterator; using std::cin; using std::cout; using std::endl;
using std::ifstream; using std::string; using std::vector;

int main()
{
ifstream in("document.txt");
vector<string> doc;
istream_iterator<string> str_it(in);
istream_iterator<string> eof;
while (str_it != eof)
{
	doc.push_back(*str_it++);
}
for (auto it = doc.begin(); it != doc.end(); ++it)
{
	cout << *it << endl;
}
return 0;
}
