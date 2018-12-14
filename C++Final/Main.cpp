#include "JobApplicant.h"
#include <fstream>

void setName();
void setAge();
void setHeight();
void setWeight();
void setYears();
void setCompany();
void setBachelors();
void setMasters();
void setFelony();
void setComments();
void changeInfo();
string first;
string last;
int age;
int height;
int weight;
int years;
int companiesWorked;
string companies;
string bachelors;
string masters;
string felony;
string comments;
string change;
string appInfo[12] = { "First Name: ", "Last Name: ", "Age: ", "Height(in): ", "Weight(lb): ", "Years Experience: ", "# of Companies Worked: ",
"Has Bachelors(Y/N): ", "Has Masters(Y/N): ", "Convicted of Felony(Y/N): ", "Additional Comments: ", "Do You Want to Alter Any Information?(Y/N): " };
JobApplicant Applicant;

int main() {

	// First & Last Name
	setName();

	//Age
	setAge();

	//Height
	setHeight();

	//Weight
	setWeight();

	//Years Experience
	setYears();

	//Companies Worked
	setCompany();

	//Bachelors
	setBachelors();

	//Masters
	setMasters();

	//Felony
	setFelony();

	//Comments
	setComments();

	//Change Information
	changeInfo();

	//Print to .txt file
	ofstream outFile;
	outFile.open("Info.txt");
	outFile << Applicant.printAppInfo();
	outFile.close();

	system("pause");
	return 0;
}

void setName()
{
	cout << appInfo[0];
	cin >> first;
	Applicant.setFirst(first);

	cout << appInfo[1];
	cin >> last;
	Applicant.setLast(last);
}

void setAge()
{
	//Age
	cout << appInfo[2];
	cin >> age;
	while (cin.fail() || age <= 18 || age > 60)
	{
		cout << appInfo[2];
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> age;
	}
	Applicant.setAge(age);
}

void setHeight()
{
	cout << appInfo[3];
	cin >> height;
	while (cin.fail() || height < 24 || height > 100)
	{
		cout << appInfo[3];
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> height;
	}
	Applicant.setHeight(height);
}

void setWeight()
{
	cout << appInfo[4];
	cin >> weight;
	while (cin.fail() || weight < 40 || weight > 600)
	{
		cout << appInfo[4];
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> weight;
	}
	Applicant.setWeight(weight);
}

void setYears()
{
	cout << appInfo[5];
	cin >> years;
	while (cin.fail() || years < 0 || years > 40)
	{
		cout << appInfo[5];
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> years;
	}
	Applicant.setYearsExp(years);
}

void setCompany()
{
	if (Applicant.getYearsExp() > 0)
	{
		cout << appInfo[6];
		cin >> companiesWorked;
	}
	while (cin.fail() || companiesWorked < 0 || companiesWorked > 20)
	{
		cout << appInfo[6];
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> companiesWorked;
	}
	Applicant.setCompaniesWorked(companiesWorked);
	Applicant.setCompanyNames(companiesWorked);
}


void setBachelors()
{
	cout << appInfo[7];
	cin >> bachelors;
	while (bachelors != "Y" && bachelors != "N")
	{
		cout << appInfo[7];
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> bachelors;
	}
	Applicant.setBachelors(bachelors);
}

void setMasters()
{
	cout << appInfo[8];
	cin >> masters;
	while (masters != "Y" && masters != "N")
	{
		cout << appInfo[8];
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> masters;
	}
	Applicant.setMasters(masters);
}

void setFelony()
{
	cout << appInfo[9];
	cin >> felony;
	while (felony != "Y" && felony != "N")
	{
		cout << appInfo[9];
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> felony;
	}
	Applicant.setFelony(felony);
}
void setComments()
{
	cout << appInfo[10];
	cin >> comments;
	Applicant.setComments(comments);
}

void changeInfo()
{
	cout << "\n" << appInfo[11];
	cin >> change;
	while (change != "Y" && bachelors != "N")
	{
		cout << appInfo[11];
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> change;
	}
	if (change == "Y")
	{
		cout << "Which Information Do You Want to Change?(NAME,AGE,HEIGHT,WEIGHT,YEARS,COMPANY,BACHELORS,MASTERS,FELONY,COMMENT): ";
		cin >> change;
		if (change == "NAME") {
			setName();
		}
		if (change == "AGE") {
			setAge();
		}
		if (change == "HEIGHT") {
			setHeight();
		}
		if (change == "WEIGHT") {
			setWeight();
		}
		if (change == "YEARS") {
			setYears();
		}
		if (change == "COMPANY") {
			setCompany();
		}
		if (change == "BACHELORS") {
			setBachelors();
		}
		if (change == "MASTERS") {
			setMasters();
		}
		if (change == "FELONY") {
			setFelony();
		}
		if (change == "COMMENT") {
			setComments();
		}
		changeInfo();
	}
	else if (change == "N")
	{
	}
}
