#include <iostream>
#include <string>
#include <cctype>
using std::cout; using std::endl; using std::string;
int main()
{
string str("Hello World!!!");
decltype(str.size()) punct_cnt = 0;
for (auto c : str)
{
if (ispunct(c))
{
++punct_cnt;
}
}
cout << punct_cnt << " punctuation characters in " << str << endl;
return 0;
}
