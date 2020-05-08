#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;
int main()
{
vector<unsigned> scores(11, 0);
unsigned grade;
while (cin >> grade)
{
if (grade <= 100)
{
++scores[grade/10];
}
}
for (vector<unsigned>::size_type i=0; i!=scores.size(); ++i)
{
cout << scores[i] << " ";
}
cout << endl;
return 0;
}
