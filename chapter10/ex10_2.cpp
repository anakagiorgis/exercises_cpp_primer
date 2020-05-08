#include <algorithm>
#include <string>
#include <list>
#include <iostream>
using std::cout; using std::endl; using std::list; using std::count; using std::string;
int main()
{
list<string> l = {string("hi"), string("hi")};
int cnt = count(l.begin(), l.end(), string("hi"));
cout << "hi occurs " << cnt << " times." << endl;
return 0;
}
