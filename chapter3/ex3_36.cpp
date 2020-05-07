#include <iostream>
#include <cstring>
using std::cin; using std::cout; using std::endl;
int main()
{
char s1[6];
char s2[6];
char c;
cout << "Please enter 5 characters" << endl;
for (size_t i=0; i!=5; ++i)
{
	cin >> c;
	s1[i] = c;
}
s1[5] = '\0';
cout << "Please enter 5 more characters" << endl;
for (size_t i=0; i!=5; ++i)
{
	cin >> c;
	s2[i] = c;
}
s2[5] = '\0';
if (strcmp(s1,s2) < 0)
{
	cout << "First string smaller than the second" << endl;
}
else if (strcmp(s1,s2) > 0)
{
	cout << "First string larger than the second" << endl;
}
else if (strcmp(s1,s2) == 0)
{
	cout << "First string equal to the second" << endl;
}
return 0;
}
