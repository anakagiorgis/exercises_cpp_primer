#include "Person.h"
using std::cin; using std::cout;
int main()
{
Person item;
if (read(cin, item))
{
	print(cout, item);
}
else
{
	std::cerr << "No data?!" << std::endl;
}
return 0;
}
