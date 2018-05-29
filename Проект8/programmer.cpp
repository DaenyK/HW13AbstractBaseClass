#include "programmer.h"

programmer::programmer(string name, string sname, int age, int salary, string level)
{
	this->name = name;
	this->sname = sname;
	this->age = age;
	this->salary = salary;
	this->level = level;
}

void programmer::print()
{
	cout << this->sname << "\t" << this->name << "\t" << this->age << "\t" << this->salary << "\t" << this->level << endl;
}

istream & operator >> (istream & is, programmer & obj)
{
	is >> obj.name >> obj.sname >> obj.age >> obj.salary >> obj.level;
	return is;
}

ostream & operator<<(ostream & os, programmer obj)
{
	os << obj.sname << "\t" << obj.name << "\t" << obj.age << "\t" << obj.salary << "\t" << obj.level << endl;

	return os;
}

