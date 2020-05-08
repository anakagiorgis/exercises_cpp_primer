#include <memory>
#include <vector>
#include <iostream>
using namespace std;

shared_ptr<vector<int>> func1()
{
shared_ptr<vector<int>> p = make_shared<vector<int>>();
return p;
}

shared_ptr<vector<int>> func2()
{
shared_ptr<vector<int>> p = func1();
int in;
for (int i=0; i!=10; ++i)
{
	cin >> in;
	(*p).push_back(in);
}
return p;
}

void func3()
{
shared_ptr<vector<int>> p = func2();
for (auto it = (*p).begin(); it != (*p).end(); ++it)
{
	cout << *it << endl;
}
}

int main()
{
func3();
return 0;
}
