#pragma once
#include"worker.h"

class manager : public worker {
private:
	string department;
public:
	manager() = default;
	manager(string name, string sname, int age, int salary, string department);
	void print();
	friend istream& operator >> (istream& is, manager& obj);
	friend ostream& operator<<(ostream& os, manager obj);
};
