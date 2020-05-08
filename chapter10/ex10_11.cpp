#include <iostream>
using std::cin; using std::cout; using std::endl;

int compute_sum(int i)
{
auto f = [i] (int j) { return i + j; };
return f(5);
}

int main()
{
int i;
cin >> i;
int sum = compute_sum(i);
cout << sum << endl;
return 0;
}
