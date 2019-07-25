#pragma once
#ifndef STRING_H
#define STRING_H
#include <iostream>

class String
{
	friend std::ostream &operator<<(std::ostream &os, const String &);
	friend std::istream &operator>>(std::istream &is, String &);
public:
	String(const char * = "");
	String(const String &);
	~String();

	const String &operator=(const String&);
	const String &operator+=(const String&);

	bool operator!() const;
	bool operator==(const String&) const;
	bool operator<(const String&) const;

	bool operator!=(const String& other) const {
		return !(*this == other);
	}
	bool operator>(const String& other) const {
		return other < *this;
	}
	bool operator>=(const String& other) const {
		return !(*this < other);
	}
	bool operator<=(const String& other) const {
		return !(other < *this);
	}

	char &operator[] (int);
	char operator[] (int) const;
	int getLenght() const;
	//String operator()(int, int = 0) const;
private:
	int lenght;
	char *sPtr;
	void setString(const char *);
};


#endif // STRING_H