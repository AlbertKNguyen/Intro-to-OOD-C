// COMP250 HW 1 - Trying out your IDE
#include <iostream>
using namespace std;
int main() {
	// init variables
	double input = 0;
	bool success = 0;

	// promt user
	cout << "Please enter a decimal number:\n";

	success = static_cast <bool> (cin >> input);

	cin.clear();	// clear input stream buffer

	cout << "success = " << success << endl;

	// Thank user, display what they entered
	cout << "Thank you, your input has been registered:\n"
		<< "You entered " << input << endl;
	
	system("pause");
	return 0;
}