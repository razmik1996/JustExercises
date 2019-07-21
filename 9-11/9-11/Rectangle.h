#pragma once
class Rectangle
{
private:
	double length, width;
public:
	Rectangle();
	Rectangle(int, int);
	void setLenght(double);
	void setWidth(double);
	double perimeter();
	double area();
	~Rectangle();
};

