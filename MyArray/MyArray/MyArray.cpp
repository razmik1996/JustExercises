#include "MyArray.h"
#include <iostream>

using std::endl;
using std::cerr;
using std::cout;
using std::cin;

#include <cstdlib>
using std::exit;

#include <iomanip>
using std::setw;

MyArray::MyArray(const MyArray &ArrayforCopy) : size(ArrayforCopy.size)
{
	ptr = new int[size];

	for (int i = 0; i < size; i++) {
		ptr[i] = ArrayforCopy.ptr[i];
	}
}

MyArray::MyArray(int Size)
{
	size = (Size > 0) ? Size : 10;
	ptr = new int[size];

	for (int i = 0; i < size; i++) {
		ptr[i] = 0;
	}
}


MyArray::~MyArray()
{
	delete[]ptr;
}

int MyArray::getSize() const
{
	return size;
}

const MyArray & MyArray::operator=(const MyArray &right)
{
	if (size != right.size) {
		delete[] ptr;
		size = right.size;
		ptr = new int[size];

		for (int i = 0; i < size; i++) {
			ptr[i] = right.ptr[i];
		}
	}
	return *this;
}

bool MyArray::operator==(const MyArray &right) const
{
	if (size != right.size) {
		return false;
	}
	for (int i = 0; i < size; i++) {
		if (ptr[i] != right.ptr[i]) {
			return false;
		}
	}
	return true;
}

int & MyArray::operator[](int index)
{
	if (index < 0 || index > size) {
		cerr << "\nError 1: out of range" << endl;
		exit(1);
	}
	return ptr[index];
}

int MyArray::operator[](int index) const
{
	if (index < 0 || index > size) {
		cerr << "\nError 1: out of range" << endl;
		exit(1);
	}
	return ptr[index];
}

std::ostream & operator<<(std::ostream & os, MyArray &arrayForPrint)
{
	for (int i = 0; i < arrayForPrint.size; i++) {
		os << arrayForPrint.ptr[i] << " ";
	}
	os << std::endl;
	return os;
}

std::istream & operator>>(std::istream & is, MyArray &arrayForInput)
{
	std::cout << "Enter " << arrayForInput.size << " Integers: ";
	for (int i = 0; i < arrayForInput.size; i++){
		is >> arrayForInput[i];
	}
	return is;
}