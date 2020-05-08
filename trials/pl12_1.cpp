#include <memory>
#include <iostream>
#include <string>
using namespace std;

int main()
{
auto p = make_shared<string>("hi");
cout << *p << endl;
return 0;
}
