#pragma once
#ifndef CAR_H
#define CAR_H

#include "body.h"
#include <string>

class Car
{
public:
	Car(const body & const, std::string = "Honda torneo");
	std::string getCarName() const;
	std::string getCarColor() const;
	~Car();
private:
	std::string name;
	const body character;
};

#endif CAR_H