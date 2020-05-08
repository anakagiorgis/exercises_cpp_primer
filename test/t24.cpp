#include <iostream>
using namespace std;
class Trapezium
{
public:
	Trapezium() = default;
	Trapezium(double a, double c, double d): base(a),
														height(c),
																top(d) { }
	double Area();
	double base;
	double height;
	double top;
};
double Trapezium::Area()
{
	double area;
	area = ((base+top)*height)/2;
	return area;
}
int main()
{
	Trapezium trapezium1;
	trapezium1.base = 2;
	trapezium1.height = 1.5;
	trapezium1.top = 1.3;
	Trapezium trapezium2(1,1,1);
	double a1 = trapezium1.Area();
	double a2 = trapezium2.Area();
	cout << a1 << endl;
	cout << a2 << endl;
	return 0;
}
