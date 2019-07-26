#include "Car.h"
#include "body.h"

Car::Car(const body& const bodyCharacter, std::string name) :
	character(bodyCharacter)
{
	this->name = name;
}

std::string Car::getCarName() const {
	return name;
}

std::string Car::getCarColor() const {
	return character.getBodyColor();
}

Car::~Car()
{
}
