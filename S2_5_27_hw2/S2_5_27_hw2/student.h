#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
#include"universitystaff.h"
using std::string;

class Student {
public:
	Student();
	Student(string theUniversityName, int theRegistrationNumber, UniversityStaff& theObject);
	Student(Student& theObject);
	string getUniversityName()const;
	int getRegistrationNumber()const;
	string getProctor()const;
	Student& operator =(const Student&);
private:
	string universityName;
	int registrationNumber;
	UniversityStaff proctor;
};

#endif
