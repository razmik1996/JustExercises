#include "Date.h"

Date::Date(int day, int mounth, int year)
{
	setDay(day);
	setMounth(mounth);
	setYear(year);
}

Date::Date(Date & other)
{
	this->day = other.day;
	this->mounth = other.mounth;
	this->year = other.year;
}

Date Date::operator=(Date & other)
{
	this->day = other.day;
	this->mounth = other.mounth;
	this->year = other.year;

	return *this;
}

void Date::setDay(int day)
{
	this->day = (day > 0 && day <= 31 ? day : 1);
}

int Date::getDay() const
{
	return day;
}

void Date::setMounth(int mounth)
{
	this->mounth = (mounth > 0 && mounth <= 12 ? mounth : 1);
}

int Date::getMounth() const
{
	return mounth;
}

void Date::setYear(int year)
{
	this->year = ((year > 1900 && year <= 2020) ? year : 1900);
}

int Date::getYear() const
{
	return year;
}

Date::~Date()
{
}

std::ostream & operator<<(std::ostream &out, Date & other)
{
	out << other.day << "." << other.mounth << "." << other.year;
	return out;
}
