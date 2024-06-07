#include<iostream>
#include<string>
#include"Administrator.h"
using namespace std;

namespace SavitchEmployees {
	Administrator::Administrator() : SalariedEmployee(), title(""), area(""), supervisor(""){}
	Administrator::Administrator(const string& theName, const string& theSsn, double theWeeklySalary,
		const string& theTitle, const string& theArea, const string& theSupervisor): SalariedEmployee(theName, theSsn, theWeeklySalary), 
		title(theTitle), area(theArea), supervisor(theSupervisor){}
	void Administrator::setSuperviser(const string& supervisor) {
		this->supervisor = supervisor;
	}
	void Administrator::input() {
		string inp;
		cout << "Enter the Name: ";
		getline(cin, inp);
		setName(inp);
		cout << "Enter the Employee Number: ";
		getline(cin, inp);
		setSsn(inp);
		double mon;
		cout << "Enter the Salary: ";
		cin >> mon;
		setSalary(mon);
		AnnualsSalary = getSalary() * 4 * 12;
		getchar();
		cout << "Enter the Title: ";
		getline(cin, title);
		cout << "Enter the Area: ";
		getline(cin, area);
		cout << "Enter the Supervisor: ";
		getline(cin, supervisor);
	}
	void Administrator::print() {
		cout << "Name: " << getName() << endl;
		cout << "Title of the employee: " << title << endl;
		cout << "Area of responsibility: " << area << endl;
		cout << "Supervisor of the employee: " << supervisor << endl;
	}
	void Administrator::printCheck(int) {
		SalariedEmployee::printCheck();
		cout << "Title of the employee: " << title << endl;
		cout << "Area of responsibility: " << area << endl;
		cout << "Supervisor of the employee: " << supervisor << endl;
		cout << "_________________________________________________\n";
	}
}