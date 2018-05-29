#pragma once
#include"gruz.h"

class plane : public gruz {
public:
	plane() = default;
	plane(int value, double distance, string city, int hour, int minute);
	void print();
	friend istream& operator >> (istream& is, plane & obj);
	friend ostream& operator<<(ostream& os, plane obj);
};

