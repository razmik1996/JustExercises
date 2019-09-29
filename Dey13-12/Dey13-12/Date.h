#pragma once
#ifndef DATE_H
#include <iostream>


class Date
{
	friend std::ostream &operator<<(std::ostream &out, Date &other);
public:
	Date(int day = 1, int mounth = 1, int year = 1900);
	Date(Date& other);
	Date operator=(Date &other);
	void setDay(int);
	int getDay() const;
	void setMounth(int);
	int getMounth() const;
	void setYear(int);
	int getYear() const;

	~Date();
private:
	int day;
	int mounth;
	int year;
};

#endif // !DATE_H