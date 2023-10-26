//Lab Problem 9-2
#include<iostream>

using namespace std;


//function prototypes
bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
/*
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);
*/

int main() {
	const int CAPACITY = 6;
	int values[CAPACITY];

	for (int x = 0; x < 6; x++) {
		cout << "Enter integer # " << x << ": ";
		int input;
		cin >> input;
		values[x] = input;
	}
	//increasing
	if (isSortedIncreasing(values, CAPACITY) == true) {
		cout << "The data is increasing. " << endl;
	}
	else {
		cout << "The data is not increasing. " << endl;
	}
	//decreasing
	if (isSortedDecreasing(values, CAPACITY) == true) {
		cout << "The data is decreasing. " << endl;
	}
	else {
		cout << "The data is not decreasing. " << endl;
	}



}


bool isSortedIncreasing(int values[], int size) {
	int lowest = 0;
	bool increase = true;
	for (int i = 0; i < 6; i++) {
		if (values[i] < lowest) {
			increase = false;
			return false;
		}
		else {
			increase = true;
			lowest = values[i];
		}
	}
	return true;
}


bool isSortedDecreasing(int values[], int size) {
	int highest = values[0];
	bool decrease = true;
	for (int i = 0; i < 6; i++) {
		if (values[i] > highest) {
			decrease = false;
			return false;
		}
		else {
			decrease = true;
			highest = values[i];
		}
	}
	return true;
}

/*
bool hasAdjacentDuplicates(int values[], int size) {

}

bool hasDuplicates(int values[], int size) {

}

*/
