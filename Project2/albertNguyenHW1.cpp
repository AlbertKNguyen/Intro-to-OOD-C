// Programmed by Albert Nguyen

#include <iostream>
using namespace std;

int main() {
	
	cout << "Welcome! \n";
	
	bool isThreeDigits = false;
	int threeDigits = 0;
	
	cout << "Enter a three digit number: ";
	cin >> threeDigits;
	while (!isThreeDigits)
	{
		if ((threeDigits > 99 && threeDigits < 1000)){
			isThreeDigits = true;
		}
		else
		{
			cout << "Try again.\nEnter a three digit number: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> threeDigits;
		}
	}

	int A = threeDigits / 100;
	int B = (threeDigits - A * 100) / 10;
	int C = threeDigits % 10;

	int ABC = A * 100 + B * 10 + C;
	int BCA = B * 100 + C * 10 + A;
	int CAB = C * 100 + A * 10 + B;

	int X = ABC % 11;
	int Y = BCA % 11;
	int Z = CAB % 11;
	
	int P = X + Y;
	int Q = Y + Z;
	int R = X + Z;

	// formatted output
	cout << "\nThree Digit Number: " << threeDigits << "\nA = " << A
		<< "\t\tB = " << B << "\t\tC = " << C << "\nABC = " << ABC
		<< "\tBCA = " << BCA << "\tCAB = " << CAB << "\nX = " << X
		<< "\t\tY = " << Y << "\t\tZ = " << Z << "\nP = " << P
		<< "\t\tQ = " << Q << "\t\tR = " << R << endl;
	
	system ("pause");
	return 0;
}