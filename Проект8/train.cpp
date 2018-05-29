#include "train.h"

train::train(int value, double distance, string city, int hour, int minute)
{
	this->value = value;
	this->distance = distance;
	this->city = city;
	this->hour = hour;
	this->minute = minute;
}

void train::print()
{
	cout << this->value << "\t" << this->distance << "\t\t" << this->city << "\t" << this->hour << "\t" << this->minute << endl;
}

istream & operator >> (istream & is, train & obj)
{
	is >> obj.value >> obj.distance >> obj.city >> obj.hour >> obj.minute;
	return is;
}

ostream & operator<<(ostream & os, train obj)
{
	os << obj.value << "\t" << obj.distance << "\t" << obj.city << "\t" << obj.hour << "\t" << obj.minute << endl;

	return os;
}




