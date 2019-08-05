#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == 4 || j == 4) {
				cout << "*";
			}
			if (i + j < 9) {
				cout << " ";
			}
		}
		cout << endl;
	}
}