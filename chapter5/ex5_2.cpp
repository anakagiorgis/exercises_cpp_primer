#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::cerr; using std::string; using std::vector;
int main()
{
int grade;
const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
string lettergrade;
cout << "Please enter your numeric grade" << endl;
cin >> grade;
if (grade < 0 || grade > 100)
{
	cerr << "Your grade is not in the valid range!" << endl;
	return -1;
}
(grade < 60) ? lettergrade = scores[0] : lettergrade = scores[(grade - 50)/10];
cout << "Your letter grade is: " << lettergrade << endl;
return 0;
}
