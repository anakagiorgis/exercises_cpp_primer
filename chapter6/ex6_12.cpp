#include <iostream>
#include <string>
using std::cout; using std::endl; using std::string;

int main(int argc, char *argv[])
{
string arg;
string arg1 = argv[1];
string arg2 = argv[2];
arg = arg1 + arg2;
cout << arg << endl;
return 0;
}
