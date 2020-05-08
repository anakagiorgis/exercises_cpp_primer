#include "Chapter6.h"
int fact(int n)
{
if (n==1)
{
	return n;
}
else if (n > 1)
{
	return n*fact(n-1);
}
}
