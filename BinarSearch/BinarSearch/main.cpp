#include "BinarySearch.h"
#include <iostream>

int main() {
	BinarySearch ExampleVector(15);
	ExampleVector.displayElements();
	cout << ExampleVector.binarySearch(45) << endl;
	int i;
	cin >> i;
}