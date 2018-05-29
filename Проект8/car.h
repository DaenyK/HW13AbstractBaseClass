#pragma once
#include"gruz.h"

class car : public gruz {
public:
	car() = default;
	car(int value, double distance, string city, int hour, int minute);
	void print();
	friend istream& operator >> (istream& is, car & obj);
	friend ostream& operator<<(ostream& os, car obj);
};

