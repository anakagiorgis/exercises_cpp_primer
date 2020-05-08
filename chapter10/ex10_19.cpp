#include <iterator>
#include <fstream>
#include <vector>
using std::istream_iterator; using std::ostream_iterator; using std::ifstream;
using std::vector; using std::ofstream;
int main()
{
ifstream in("numbers.txt");
istream_iterator<int> int_in(in);
istream_iterator<int> int_eof;
vector<int> vec(int_in, int_eof);
ofstream out1("even_numbers.txt");
ofstream out2("odd_numbers.txt");
ostream_iterator<int> out1_iter(out1, " ");
ostream_iterator<int> out2_iter(out2, "\n");
for (auto it = vec.begin(); it != vec.end(); ++it)
{
	if ( *it % 2 == 0 )
	{
		*out1_iter++ = *it;
	}
	else
	{
		*out2_iter++ = *it;
	}
}
out1.close();
out2.close();
return 0;
}


