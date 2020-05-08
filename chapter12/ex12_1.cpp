#include <memory>
#include <iostream>
#include <vector>
using namespace std;

vector<int>* func1()
{
vector<int> *p = new vector<int>;
return p;
}

vector<int>* func2()
{
vector<int> *v = func1();
int input;
for (int i=0; i!=10; ++i)
{
	cin >> input;
	(*v).push_back(input);
}
return v;
}

void func3()
{
vector<int> *v = func2();
for (auto it = (*v).begin(); it != (*v).end(); ++it)
{
	cout << *it << endl;
}
delete v;
}

int main()
{
func3();
return 0;
}
