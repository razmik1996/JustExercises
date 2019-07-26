#include "body.h"
#include "Car.h"



body::body(char* bodyColor):bodyColor(bodyColor)
{
}

char* body::getBodyColor() const {
	return this->bodyColor;
}

body::~body()
{
}
