#include "BinarySearch.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using std::rand;
using std::srand;

BinarySearch::BinarySearch(int vectorSize)
{
	size = (vectorSize > 0 ? vectorSize : 10);
	srand(time(0));

	for (int i = 0; i < size; i++) {
		data.push_back(10 + rand() % 90);
	}
	std::sort(data.begin(), data.end());
}

int BinarySearch::binarySearch(int number) const {
	int low = 0;
	int high = size - 1;
	int mid = (high + low + 1) / 2;
	int location = -1;
	do {
		displaySubElements(low, high);
		if (data[mid] < number) {
			low = mid + 1;
		}
		else if (data[mid] > number) {
			high = mid - 1;
		}
		else location = mid;

		mid = (low + high + 1)/2;
	} while ((low <= high) && (location == -1));
	return location;
}

void BinarySearch::displayElements() const{
	displaySubElements(0, size - 1);
}

void BinarySearch::displaySubElements(int low, int high) const {
	for (int i = 0; i < low; i++) {
		cout << "   ";
	}
	for (int i = low; i < high; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}

BinarySearch::~BinarySearch()
{
}
