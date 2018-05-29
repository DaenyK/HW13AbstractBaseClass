#include "car.h"

car::car(int value, double distance, string city, int hour, int minute)
{
	this->value = value;
	this->distance = distance;
	this->city = city;
	this->hour = hour;
	this->minute = minute;
}

void car::print()
{
	cout << this->value << "\t" << this->distance << "\t\t" << this->city << "\t" << this->hour << "\t" << this->minute << endl;
}

istream & operator >> (istream & is, car & obj)
{
	is >> obj.value >> obj.distance >> obj.city >> obj.hour >> obj.minute;
	return is;
}

ostream & operator<<(ostream & os, car obj)
{
	os << obj.value << "\t" << obj.distance << "\t" << obj.city << "\t" << obj.hour << "\t" << obj.minute << endl;

	return os;
}




