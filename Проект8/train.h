#pragma once
#include"gruz.h"

class train : public gruz {
public:
	train() = default;
	train(int value, double distance, string city, int hour, int minute);
	void print();
	friend istream& operator >> (istream& is, train & obj);
	friend ostream& operator<<(ostream& os, train obj);
};

