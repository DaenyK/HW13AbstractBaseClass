#pragma once
#include"worker.h"

class administrator : public worker {
private:
	string place;
public:
	administrator() = default;
	administrator(string name, string sname, int age, int salary, string place);
	void print();
	friend istream& operator >> (istream& is, administrator & obj);
	friend ostream& operator<<(ostream& os, administrator obj);
};
