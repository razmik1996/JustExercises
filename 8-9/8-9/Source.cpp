#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	const int SIZE = 5;
	unsigned int values[SIZE];
	unsigned int *vPtr;

	vPtr = &values[0];
	vPtr = values;

	for (int i = 2; i <= (SIZE * 2); i+= 2) {
		values[(i / 2)-1] = i;
	}

	for (int i = 2; i <= (SIZE * 2); i += 2) {
		cout << values[(i / 2)-1];
	}
	cout << endl;
	
	for (int i = 0; i < SIZE; i++) {
		cout << "index " << i << " = " << *(vPtr + i) << endl;
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "index " << i << " = " << vPtr[i] << endl;
	}
}