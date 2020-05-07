#include <iostream>
#include <cstring>
using std::cin; using std::cout; using std::endl;
int main()
{
char s1[] = "Hello,";
char s2[] = "World!";
int n = sizeof(s1)/sizeof(s1[0]);
int m = sizeof(s2)/sizeof(s2[0]);
char large_s[n+m+5];
strcpy(large_s, s1);
strcat(large_s, " ");
strcat(large_s, s2);
for (size_t i=0; i!=n+m; ++i)
{
	cout << large_s[i];
}
cout << endl;
return 0;
}
