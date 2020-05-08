#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector; using std::istream_iterator;
using std::sort; using std::copy; using std::ostream_iterator;

int main()
{
istream_iterator<int> in_iter(cin);
istream_iterator<int> eof;
vector<int> vec;
while (in_iter != eof)
{
	vec.push_back(*in_iter++);
}
sort(vec.begin(), vec.end());
ostream_iterator<int> out_iter(cout, " ");
copy(vec.begin(), vec.end(), out_iter);
cout << endl;
return 0;
}
