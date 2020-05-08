#include "Sales_data.h"
#include <fstream>
int main(int argc, char *argv[])
{
std::ifstream in(argv[1]);
std::ofstream out(argv[2]);
Sales_data total;
unsigned count = 0;
if (read(in, total))
{
	count += 1;
	Sales_data trans;
	while (read(in, trans))
	{
		if (total.isbn() == trans.isbn())
		{
			count += 1;
			total.combine(trans);
		}
		else
		{
			print(out, total) << " " << count << std::endl;
			count = 1;
			total = trans;
		}
	}
	print(out, total) << " " << count << std::endl;
}
else
{
	std::cerr << "No data?!" << std::endl;
}
return 0;
}
