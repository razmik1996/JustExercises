#include "Rectangle.h"

Rectangle::Rectangle()
{
	length = 1.0;
	width = 1.0;
}

Rectangle::Rectangle(int l, int w) {
	setLenght(l);
	setWidth(w);
}

void Rectangle::setLenght(double lenght)
{
	this->length = (lenght >= 0.0 && lenght <= 20.0) ? lenght : 0;
}

void Rectangle::setWidth(double width)
{
	this->width = (width >= 0.0 && width <= 20.0) ? width : 0;
}

double Rectangle::perimeter()
{
	return ((width * 2) + (length * 2));
}

double Rectangle::area()
{
	return (width * length);
}


Rectangle::~Rectangle()
{
}
