#include <iostream>
#include <chrono>

unsigned int stopwatch()
{
static auto start_time = std::chrono::steady_clock::now();
auto end_time = std::chrono::steady_clock::now();
auto delta = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time-start_time);
start_time = end_time;
return delta.count();
}

int main()
{
int i=10;
stopwatch();
while (i>=0)
{
--i;
}
std::cout << stopwatch() << "\n";
stopwatch();
for (int i=10; i>=0; --i)
{
}
std::cout << stopwatch() << "\n";
return 0;
}
