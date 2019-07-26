#pragma once
#ifndef BODY_H
#define BODY_H

#include <string>

class body
{
public:
	body(char* = "Black");
	char* getBodyColor() const;
	~body();
private:
	char* bodyColor;
};


#endif BODY_H