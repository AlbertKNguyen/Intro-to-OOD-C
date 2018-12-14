//Programmed by Albert Nguyen
#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

double chillIndex(double temperature, int windSpeed)
{
	double windChill = 35.74 + (0.621 * temperature) - (35.75 * (pow(windSpeed, 0.16))) + (0.4275 * temperature * (pow(windSpeed, 0.16)));
	return windChill;
}


int main()
{
	double temperature;

	cout << "Enter today's temperature in Farenheit: ";
	cin >> temperature;
	while (temperature > 40)
	{
		cout << "\nTry Again.\nEnter today's temperature in Farenheit: ";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> temperature;
	}

	cout << "\nWind chill Based on Wind Speed:\nToday's Temperature(F): " << temperature << "\n\nSpeed(mph)\tWind chill index(F)\n";

	for (int windSpeed = 5; windSpeed <= 40; windSpeed += 5)
	{
		string frostBite;
		if (chillIndex(temperature, windSpeed) <= -18) {
			frostBite = "(Frostbite Danger)";
		}

		cout << setw(6) << windSpeed << setw(21) << chillIndex(temperature, windSpeed) << " " << frostBite << endl;
	}

	system("pause");
	return 0;
}