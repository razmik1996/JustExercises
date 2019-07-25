#include "MyDate.h"

const int MyDate::days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

MyDate::MyDate(int m, int d, int y)
{
	setDate(m, d, y);
}


MyDate::~MyDate()
{
}

void MyDate::helpIncrement()
{
	if (!endOfMonth(day)) {
		day++;
	}
	else {
		if (month < 12) {
			month++;
			day = 1;
		}
		else {
			year++;
			month = 1;
			day = 1;
		}
	}
}

std::ostream & operator<<(std::ostream & os, const MyDate & date)
{
	static char *monthName[13] = { "", "January", "February", "March", "April", "May",
	"June", "july", "August", "September", "October", "November", "December" };
	os << monthName[date.month] << " " << date.day << " " << date.year;
	return os;
}


void MyDate::setDate(int m, int d, int y)
{
	month = (m > 0 && m <= 12) ? m : 1;
	year = (y > 1800 && y <= 2500) ? y : 1990;

	if (month == 2 && leapYear(year)) {
		day = (d >= 1 && d <= 29) ? d : 1;
	}
	else {
		day = (d >= 1 && d <= days[month]) ? d : 1;
	}
}

MyDate & MyDate::operator++()
{
	helpIncrement();
	return *this;
}

MyDate MyDate::operator++(int)
{
	MyDate temp = *this;
	helpIncrement();
	return temp;
}

const MyDate & MyDate::operator+=(int n)
{
	for (int i = 0; i < n; i++) {
		helpIncrement();
	}
	return *this;
}

bool MyDate::leapYear(int testYear) const
{
	if (testYear % 400 == 0 || (testYear % 100 != 0 && testYear % 4 == 0)) {
		return true;
	}
	else
		return false;
}

bool MyDate::endOfMonth(int testDay) const
{
	if (month == 2 && leapYear(year)) {
		return testDay == 29;
	}
	else {
		return testDay == days[month];
	}
}
