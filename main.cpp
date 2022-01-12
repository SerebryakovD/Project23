#include<iostream>

using namespace std;

void printMinMax(int year, int minRange = 0, int maxRange = 11) {
	srand(time(0));
	const int maxYear = 2022;

	int arr[10][12];
	int yearIndex, maxIndex = -1, minIndex = -1, min, max, sizeI = 10, sizeJ = 12;

	for (int i = 0; i < sizeI; i++) {
		for (int j = 0; j < sizeJ; j++) {
			arr[i][j] = rand() % (1001 - 50) + 50;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	yearIndex = maxYear - year;
	min = arr[yearIndex][minRange];
	max = arr[yearIndex][minRange];

	for (int i = minRange; i <= maxRange; i++) {
		if (arr[yearIndex][i] > max) {
			max = arr[yearIndex][i];
			maxIndex = i;
		}

		if (arr[yearIndex][i] < min) {
			min = arr[yearIndex][i];
			minIndex = i;
		}
	}

	cout << "max - " << maxIndex + 1 << " min - " << minIndex + 1;
}

int main() {
	int year, yearIndex, minRange, maxRange;

	cout << "Enter year (2012 - 2022): ";
	cin >> year;
	cout << "Enter min range: ";
	cin >> minRange;
	cout << "Enter max range: ";
	cin >> maxRange;

	minRange -= 1;
	maxRange -= 1;

	printMinMax(year, minRange, maxRange);

	return 0;
}