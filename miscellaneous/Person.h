#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using std::istream; using std::ostream;
struct Person
{
private:
	std::string name;
	std::string address;
public:
	Person() = default;
	Person(const std::string &s): name(s) { }
	Person(const std::string &s, const std::string &p): name(s), address(p) { }
	std::string get_name() const { return name; }
	std::string get_address() const { return address; }
	istream &read(istream &is, Person &item);
	ostream &print(ostream &os, const Person &item);
};
istream &read(istream &is, Person &item)
{
is >> item.name >> item.address;
return is;
}
ostream &print(ostream &os, const Person &item)
{
os << item.get_name() << " " << item.get_address();
return os;
}
#endif
