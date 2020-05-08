#include <random>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	typedef mt19937 MyRNG;
	MyRNG::result_type seed_val = time(NULL);
	MyRNG rng;
	rng.seed(seed_val);
	uniform_int_distribution<MyRNG::result_type> uint_dist10(0,4);
	int i=0;
	while (i < 10)
	{
		cout << uint_dist10(rng) << " " << uint_dist10(rng) << endl;
		++i;
	}
	return 0;
}
