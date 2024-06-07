#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include<iostream>
#include<string>
#include "SalariedEmployee.h"
using namespace std;

namespace  SavitchEmployees {
	class Administrator : protected SalariedEmployee {
	public:
		Administrator();
		Administrator(const string&, const string&, double, const string&,const string&,const string&);
		void setSuperviser(const string&);
		void input();
		void print();
		void printCheck(int);
	protected:
		double AnnualsSalary;
	private:
		string title;
		string area;
		string supervisor;
	};
}

#endif