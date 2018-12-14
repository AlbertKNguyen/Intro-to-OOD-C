#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class JobApplicant {

public:
	JobApplicant();
	void setFirst(string first);
	string getFirst() const;
	void setLast(string last);
	string getLast() const;
	void setAge(int age);
	int getAge() const;
	void setHeight(int height);
	double getHeight() const;
	void setWeight(int weight);
	int getWeight() const;
	void setYearsExp(int years);
	int getYearsExp() const;
	void setCompaniesWorked(int numberOfCo);
	int getCompaniesWorked() const;
	void setCompanyNames(int companiesWorked);
	string getCompanyNames() const;
	void setBachelors(string yesNo);
	bool getBachelors() const;
	void setMasters(string yesNo);
	bool getMasters() const;
	void setFelony(string yesNo);
	bool getFelony() const;
	void setComments(string comments);
	string getComments() const;
	string printAppInfo() const;



private:
	string firstName;
	string lastName;
	int age;
	int height;
	int weight;
	int yearsExp;
	int companiesWorked;
	string companyNames[19];
	bool hasBachelors;
	bool hasMasters;
	bool hasFelony;
	string addComments;
};