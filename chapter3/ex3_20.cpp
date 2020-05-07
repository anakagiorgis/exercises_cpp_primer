#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::string; using std::vector;
int main()
{
vector<int> v1;
vector<int> v2(10);
vector<int> v3(10, 42);
vector<int> v4{10};
vector<int> v5{10, 42};
vector<string> v6{10};
vector<string> v7{10, "hi"};
cout << "v1 has size " << v1.size() << endl;
cout << "v2 has size " << v2.size() << endl;
cout << "v2 has elements: ";
for (vector<int>::size_type i=0; i!= v2.size(); ++i)
{
cout << v2[i] << " ";
}
cout << endl;
cout << "v3 has size " << v3.size() << endl;
cout << "v3 has elements: ";
for (vector<int>::size_type i=0; i!=v3.size(); ++i)
{
cout << v3[i] << " ";
}
cout << endl;
cout << "v4 has size " << v4.size() << endl;
cout << "v4 has elements: ";
for (vector<int>::size_type i=0; i!=v4.size(); ++i)
{
cout << v4[i] << " ";
}
cout << endl;
cout << "v5 has size " << v5.size() << endl;
cout << "v6 has elements: ";
for (vector<int>::size_type i=0; i!=v5.size(); ++i)
{
cout << v5[i] << " ";
}
cout << endl;
cout << "v6 has size " << v6.size() << endl;
cout << "v6 has elements: ";
for (vector<string>::size_type i=0; i!=v6.size(); ++i)
{
cout << v6[i] << " ";
}
cout << endl;
cout << "v7 has size " << v7.size() << endl;
cout << "v7 has elements: ";
for (vector<string>::size_type i=0; i!=v7.size(); ++i)
{
cout << v7[i] << " ";
}
cout << endl;
return 0;
}
