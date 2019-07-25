#pragma once
#ifndef MYDATE_H
#define MYDATE_H
#include <iostream>

class MyDate
{
	friend std::ostream &operator<<(std::ostream& os, const MyDate& date);
public:
	MyDate(int m = 1, int d = 1, int y = 1990);
	void setDate(int m, int d, int y);
	MyDate &operator++();
	MyDate operator++(int);
	const MyDate &operator+=(int);
	bool leapYear(int) const;
	bool endOfMonth(int) const;
	~MyDate();
private:
	int month;
	int day;
	int year;

	static const int days[];
	void helpIncrement();
};

#endif // !MYDATE_H