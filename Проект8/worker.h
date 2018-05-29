#pragma once
#include "Headers.h"

class worker {
protected:
	string name;
	string sname;
	int age;
	int salary;
public:
	worker() = default;
	worker(string name, string sname, int age, int salary)
	{
		this->name = name;
		this->sname = sname;
		this->age = age;
		this->salary = salary;
	}

	virtual void print() = 0;
};
