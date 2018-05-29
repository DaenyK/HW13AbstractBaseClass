#include "administrator.h"

administrator::administrator(string name, string sname, int age, int salary, string placeofAdministration)
{
	this->name = name;
	this->sname = sname;
	this->age = age;
	this->salary = salary;
	this->place = placeofAdministration;
}

void administrator::print()
{
	cout << this->sname << "\t" << this->name << "\t" << this->age << "\t" << this->salary << "\t" << this->place << endl;
}

istream & operator >> (istream & is, administrator & obj)
{
	is >> obj.name >> obj.sname >> obj.age >> obj.salary >> obj.place;
	return is;
}

ostream & operator<<(ostream & os, administrator obj)
{
	os << obj.sname << "\t" << obj.name << "\t" << obj.age << "\t" << obj.salary << "\t" << obj.place << endl;

	return os;
}


