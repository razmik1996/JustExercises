#pragma once
#ifndef MYARRAY_H
#define MYARRAY_H

#include <iostream>


class MyArray
{
	friend std::ostream &operator<<(std::ostream &os, MyArray &);
	friend std::istream &operator>>(std::istream &is, MyArray &);
public:
	MyArray(const MyArray &);
	MyArray(int = 10);
	~MyArray();
	int getSize() const;

	const MyArray &operator=(const MyArray &);
	bool operator==(const MyArray &) const;
	bool operator!=(const MyArray &other) const {
		return !(*this == other);
	}

	int &operator[] (int);
	int operator[] (int) const;
private:
	int size;
	int *ptr;
};

#endif MYARRAY_H