#include <memory>
#include <iostream>
using namespace std;
int main()
{
int *pi = new int(1024);
cout << *pi << endl;
delete pi;
return 0;
}
