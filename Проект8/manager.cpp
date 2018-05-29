#include "manager.h"

manager::manager(string name, string sname, int age, int salary, string department)
{
	this->name = name;
	this->sname = sname;
	this->age = age;
	this->salary = salary;
	this->department = department;
}

void manager::print()
{
	cout << this->sname << "\t" << this->name << "\t" << this->age << "\t" << this->salary << "\t" << this->department << endl;
}

istream & operator >> (istream & is, manager & obj)
{
	is >> obj.name >> obj.sname >> obj.age >> obj.salary >> obj.department;
	return is;
}

ostream & operator<<(ostream & os, manager obj)
{
	os << obj.sname << "\t" << obj.name << "\t" << obj.age << "\t" << obj.salary << "\t" << obj.department << endl;

	return os;
}
