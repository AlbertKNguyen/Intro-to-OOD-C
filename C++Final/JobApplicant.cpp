#include "JobApplicant.h"

//Constructor
JobApplicant::JobApplicant()
{
	age = 0;
	height = 0;
	weight = 0;
	yearsExp = 0;
	companiesWorked = 0;
	hasBachelors = 0;
	hasMasters = 0;
	hasFelony = 0;
}

//Setters
void JobApplicant::setFirst(string first) {
	firstName = first;
}

void JobApplicant::setLast(string last) {
	lastName = last;
}

void JobApplicant::setAge(int age) {
	this->age = age;
}

void JobApplicant::setHeight(int height) {
	this->height = height;
}

void JobApplicant::setWeight(int weight) {
	this->weight = weight;
}

void JobApplicant::setYearsExp(int years) {
	yearsExp = years;
}

void JobApplicant::setCompaniesWorked(int numberOfCo) {
	companiesWorked = numberOfCo;
}

void JobApplicant::setCompanyNames(int companiesWorked)
{
	for (int counter = 0; counter < companiesWorked; counter++)
	{
		cout << "Company Name #" << counter + 1 << ": ";
		cin >> companyNames[counter];
	}
}

void JobApplicant::setBachelors(string yesNo)
{
	if (yesNo == "Y") {
		hasBachelors = true;
	}
	if (yesNo == "N") {
		hasBachelors = false;
	}
}

void JobApplicant::setMasters(string yesNo)
{
	if (yesNo == "Y") {
		hasMasters = true;
	}
	if (yesNo == "N") {
		hasMasters = false;
	}
}

void JobApplicant::setFelony(string yesNo)
{
	if (yesNo == "Y") {
		hasFelony = true;
	}
	if (yesNo == "N") {
		hasFelony = false;
	}
}

void JobApplicant::setComments(string comments) {
	addComments = comments;
}


//Getters
string JobApplicant::getFirst() const {
	return firstName;
}

string JobApplicant::getLast() const {
	return lastName;
}

int JobApplicant::getAge() const {
	return age;
}

double JobApplicant::getHeight() const {
	double adjHeight = height / 12.0;
	adjHeight = floor(adjHeight * 100.0)/100.0;
	return adjHeight;
}

int JobApplicant::getWeight() const {
	return weight;
}

int JobApplicant::getYearsExp() const {
	return yearsExp;
}

int JobApplicant::getCompaniesWorked() const {
	return companiesWorked;
}

string JobApplicant::getCompanyNames() const
{
	string companyList = "-";
	for (int counter = 0; counter < companiesWorked; counter++)
	{
		companyList += companyNames[counter] + "-";
	}
	return companyList;
}

bool JobApplicant::getBachelors() const {
	return hasBachelors;
}

bool JobApplicant::getMasters() const {
	return hasMasters;
}

bool JobApplicant::getFelony() const {
	return hasFelony;
}

string JobApplicant::getComments() const {
	return addComments;
}


//Print Info and Eligibility
string JobApplicant::printAppInfo() const
{
	string info = "";
	//Prints Info
	info += ("First Name: " + getFirst() + "\n");
	info += ("Last Name: " + getLast() + "\n");
	info += ("Age: " + to_string(getAge()) + "\n");
	info += ("Height: " + to_string(getHeight()) + "ft\n");
	info += ("Weight: " + to_string(getWeight()) + "lb\n");
	info += ("Years of Experience: " + to_string(getYearsExp()) + "\n");
	if (yearsExp > 0)
	{
		info += ("# of Companies Worked: " + to_string(getCompaniesWorked()) + "\n");
	}
	info += ("Has Worked at: " + getCompanyNames()) + "\n";
	if (hasBachelors)
	{
		info += ("Has a Bachelors Degree\n");
	}
	if (hasMasters)
	{
		info += ("Has a Masters Degree\n");
	}
	else
	{
		info += ("Does Not Have a Bachelors or Masters Degree\n");
	}
	if (hasFelony)
	{
		info += ("Has been Convicted of Felony\n");
	}
	info += "Comments: " + getComments() + "\n\n";

	//Calculates Eligibility
	if (!(hasBachelors && hasMasters) || yearsExp == 0 || companiesWorked == 0 && getAge() < 30)
	{
		info += "Applicant is Eligible for an Intern Position.\n";
	}
	else if (hasBachelors && getYearsExp() <= 4)
	{
		info += "Applicant is Eligible for an Entry Level or Intern Position.\n";
	}
	else if (hasBachelors || hasMasters && getYearsExp() > 4 && getAge() < 30 && getAge() >= 21)
	{
		info += "Applicant is Eligible for a Junior or Entry Level Position.\n";
	}
	else if (hasBachelors && getYearsExp() >= 5 && getYearsExp() <= 15 && getAge() >= 25 && getAge() <= 50)
	{
		info += "Applicant is Eligible for a Junior Level Position.\n";
	}
	else if (hasMasters && getYearsExp() >= 5 && getYearsExp() <= 15 && getAge() >= 25 && getAge() <= 50)
	{
		info += "Applicant is Eligible for a Senior or Junior Level Position.\n";
	}
	else if (hasMasters && getYearsExp() > 15 && getAge() >= 35 && getAge() <= 50)
	{
		info += "Applicant is Eligible for a Senior Level Position.\n";
	}
	else { info += "Could Not Compute Eligibility for this Applicant.\n"; }

	if (hasFelony)
	{
		info += "Eligility May Be Affected Based on Circumstance of Felony.\n";
	}

	return info;
}