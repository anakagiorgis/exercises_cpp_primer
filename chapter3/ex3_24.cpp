#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::endl; using std::string; using std::vector;

int main()
{
vector<int> v1;
vector<int> v2(10);
vector<int> v3(10, 42);
vector<int> v4{10};
vector<int> v5{10, 42};
vector<string> v6{10};
vector<string> v7{10, "hi"};
for (auto it = v1.cbegin(); it != v1.cend(); ++it)
{
	cout << v1.size() << " " << *it << endl;
}
for (auto it = v2.cbegin(); it != v2.cend(); ++it)
{
	cout << v2.size() << " " << *it << endl;
}
for (auto it = v3.cbegin(); it != v3.cend(); ++it)
{
	cout << v3.size() << " " << *it << endl;
}
for (auto it = v4.cbegin(); it != v4.cend(); ++it)
{
	cout << v4.size() << " " << *it << endl;
}
for (auto it = v5.cbegin(); it != v5.cend(); ++it)
{
	cout << v5.size() << " " << *it << endl;
}
for (auto it = v6.cbegin(); it != v6.cend(); ++it)
{
	cout << v6.size() << " " << *it << endl;
}
for (auto it = v7.cbegin(); it != v7.cend(); ++it)
{
	cout << v7.size() << " " << *it << endl;
}
return 0;
}
