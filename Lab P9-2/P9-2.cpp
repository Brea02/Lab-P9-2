//Lab Problem 9-2
#include<iostream>

using namespace std;


//function prototypes
bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);


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

	//adjacent dupes
	if (hasAdjacentDuplicates(values, CAPACITY) == true) {
		cout << "The data has adjacent duplicates. " << endl;
	}
	else {
		cout << "The data does not have adjacent duplicates. " << endl;
	}

	//dupes
	if (hasDuplicates(values, CAPACITY) == true) {
		cout << "The data has duplicates. " << endl;
	}
	else {
		cout << "The data does not have duplicates. " << endl;
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


bool hasAdjacentDuplicates(int values[], int size) {
	int prev = values[0];
	bool aDupes = false;
	for (int i = 1; i < 6; i++) {
		if (values[i] == prev) {
			aDupes = true;
			return true;
		}
		else {
			aDupes = false;
			prev = values[i];
		}
	}
	return false;
}

// dupes have problems
bool hasDuplicates(int values[], int size) {
	const int CAPACITY = 6;
	bool dupe = false;
	int dupCount = 0;

	if (hasAdjacentDuplicates(values, CAPACITY) == true) {
		dupe = true;
		return true;
	}

	for (int i = 0; i < 6; i++) {
		//int check_array[] = { values[0], values[1], values[2], values[3], values[4], values[5] };
		if (values[i] == values[0]) {
			//dupe = true;
			dupCount += 1;
		}

		if (values[i] == values[1]) {
			//dupe = true;
			dupCount += 1;
		}
		
		if (values[i] == values[2]) {
			//dupe = true;
			dupCount += 1;
		}

		if (values[i] == values[3]) {
			//dupe = true;
			dupCount += 1;
		}

		if (values[i] == values[4]) {
			//dupe = true;
			dupCount += 1;
		}

		if (values[i] == values[5]) {
			//dupe = true;
			dupCount += 1;
		}
	}

	if (dupCount > 6) {
		return true;
	}
	else { return false; }

	/*
	if (dupCount > 0) {
		dupCount -= 6;
		if (dupCount > 0) {
			return true;
		}
		else { return false; }
	}
	*/
}

