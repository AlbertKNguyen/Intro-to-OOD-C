#include <iostream>
#include <string>
using namespace std;

int binarySearch();
int recursiveBinarySearch(int Max, int Min);

int main() {
	const int Max = 1000;
	const int Min = 0;

	cout << "I will guess your Number between " << Min << " and " << Max << endl;
	recursiveBinarySearch(Max, Min);

	system("pause");
	return 0;
}


int recursiveBinarySearch(int Max, int Min) {

	int Middle;
	string yesNo;

	Middle = (Max + Min) / 2;
	cout << "Is your number " << Middle << "?(y/n): ";
	cin >> yesNo;
	if (yesNo != "y" || yesNo != "n") {
		cin.ignore(1000, '\n');
		cin.clear();
	}
	if (yesNo == "y") {
		cout << "I've guess your number " << Middle << endl;
		return Middle;
	}
	else if (yesNo == "n") {
		cout << "Is your number higher than " << Middle << "?(y/n): ";
		cin >> yesNo;
		if (yesNo != "y" || yesNo != "n") {
			cin.ignore(1000, '\n');
			cin.clear();
		}
		if (yesNo == "y") {
			Min = Middle + 1;
		}
		else if (yesNo == "n") {
			Max = Middle - 1;
		}

		recursiveBinarySearch(Max, Min);
	}
	return -1;
}

int binarySearch() {

	int Max = 1000;
	int Min = 0;
	int Middle;
	string yesNo;
	do {
		Middle = (Max + Min) / 2;
		cout << "Is your number " << Middle << "?(y/n): ";
		cin >> yesNo;
		if (yesNo != "y" || yesNo != "n") {
			cin.ignore(1000, '\n');
			cin.clear();
		}
		if (yesNo == "y") {
			cout << "I've guess your number " << Middle << endl;
			Max = Middle;
			return Middle;
		}
		else if (yesNo == "n") {
			cout << "Is your number higher than " << Middle << "?(y/n): ";
			cin >> yesNo;
			if (yesNo != "y" || yesNo != "n") {
				cin.ignore(1000, '\n');
				cin.clear();
			}
			if (yesNo == "y") {
				Min = Middle + 1;
			}
			else if (yesNo == "n") {
				Max = Middle - 1;
			}
		}
	} while (Middle != Max);
}