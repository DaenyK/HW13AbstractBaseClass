#pragma once
#include"worker.h"

class programmer : public worker {
private:
	string level;
public:
	programmer() = default;
	programmer(string name, string sname, int age, int salary, string level);
	void print();
	friend istream& operator >> (istream& is, programmer & obj);
	friend ostream& operator<<(ostream& os, programmer obj);
};
