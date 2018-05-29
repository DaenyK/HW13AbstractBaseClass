#pragma once
#include"Headers.h"
class gruz {
protected:
	int value;
	double distance;
	string city;
	int hour;
	int minute;
public:
	gruz() = default;
	gruz(int value,double distance,string city,int hour,int minute)
	{
		this->value = value;
		this->distance = distance;
		this->city = city;
		this->hour = hour;
		this->minute = minute;
	}
	virtual void print() = 0;
};