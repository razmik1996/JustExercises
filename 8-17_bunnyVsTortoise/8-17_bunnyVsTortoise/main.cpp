#include <iostream>
#include <ctime>

void checkLessThanZero(int* turtlePos, int* bunyPos);
void oneStepByTurtle(int* pos);
void oneStepByBuny(int* pos);

int main() 
{
	srand(time(NULL));
	const int arraySize = 71;
	int arrayLine[arraySize] = { 0 };

	int turtle = 1;
	int buny = 1;

	std::cout << "BANG!!!" << std::endl;
	std::cout << "AND THE'RE OFF !!!!!" << std::endl;

	while (turtle < arraySize && buny < arraySize) {
		oneStepByTurtle(&turtle);
		oneStepByBuny(&buny);
		checkLessThanZero(&turtle, &buny);
		for (int i = 1; i < arraySize; i++) {
			if (turtle == buny) {
				if (turtle == i) {
					std::cout << "OUCH!";
					continue;
				}
			}if (i == turtle) {
				std::cout << "T";
			} else if (i == buny) {
				std::cout << "B";
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}

	if (turtle > buny) {
		std::cout << "Tortoise Wins!! " << std::endl;
	}
	else if (turtle < buny) {
		std::cout << "Buny Wins!! " << std::endl;
	}
	else {
		std::cout << "Dead Heat!! " << std::endl;
	}
}

void checkLessThanZero(int* turtlePos, int* bunyPos) {
	if (*turtlePos <= 0) {
		*turtlePos = 1;
	}
	if (*bunyPos <= 0) {
		*bunyPos = 1;
	}
}

void oneStepByTurtle(int* pos) {
	int i;
	i = 1 + (rand() % 10);
	if (i >= 1 && i <= 5) {
		*pos += 3;
	}
	else if(i >= 6 && i <= 7) {
		*pos -= 6;
	}
	else {
		*pos += 1;
	}
}

void oneStepByBuny(int* pos) {
	int i;
	i = 1 + (rand() % 10);
	if (i >= 1 && i <= 2) {
		return;
	}
	else if (i >= 3 && i <= 4) {
		*pos += 9;
	}
	else if(i == 5){
		*pos -= 12;
	}
	else if (i >= 6 && i <= 8) {
		*pos += 1;
	}
	else {
		*pos -= 2;
	}
}