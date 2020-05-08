#include <iostream>
using std::cin; using std::cout; using std::endl;

void fact()
{
cout << "Please enter an integer" << endl;
int n;
cin >> n;
int ret = 1;
while (n > 1)
{
	ret *= n;
	--n;
}
cout << "The factorial of that integer is " << ret << endl;
}

int main()
{
fact();
return 0;
}
