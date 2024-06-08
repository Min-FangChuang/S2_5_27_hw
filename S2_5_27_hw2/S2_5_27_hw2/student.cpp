#include<iostream>
#include<string>
#include "student.h"
using std::string;

Student::Student() :universityName(""), registrationNumber(0), proctor(){}

Student::Student(string theUniversityName, int theRegistrationNumber, UniversityStaff& theObject): universityName(theUniversityName), 
registrationNumber(theRegistrationNumber), proctor(theObject){}

Student::Student(Student& theObject): universityName(theObject.universityName), registrationNumber(theObject.registrationNumber), 
proctor(theObject.proctor){}

string Student::getUniversityName()const {
	return(universityName);
}
int Student::getRegistrationNumber()const {
	return(registrationNumber);
}
string Student::getProctor()const {
	return(proctor.getName());
}
Student& Student::operator =(const Student& theRSide) {
	universityName = theRSide.universityName;
	registrationNumber = theRSide.registrationNumber;
	proctor = theRSide.proctor;
	return *this;
}
