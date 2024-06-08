#include<iostream>
#include<string>
#include "sciencestudent.h"
using std::string;

ScienceStudent::ScienceStudent():properties(""), graduatetypeCourse(""), Student(){}

ScienceStudent::ScienceStudent(string theProperties, string theGraduatetypeCourse, string theUniversityName, 
	int theRegistrationNumber, UniversityStaff& theObject): properties(theProperties), graduatetypeCourse(theGraduatetypeCourse), 
	Student(theUniversityName, theRegistrationNumber, theObject){}

ScienceStudent::ScienceStudent(ScienceStudent& theObject): properties(theObject.properties), graduatetypeCourse(theObject.graduatetypeCourse), Student(theObject){}

string ScienceStudent::getProperties()const {
	return(properties);
}
string ScienceStudent::getGraduatetypeCourse()const {
	return(graduatetypeCourse);
}
ScienceStudent& ScienceStudent::operator = (const ScienceStudent& theRSide) {
	Student::operator=(theRSide);
	properties = theRSide.properties;
	graduatetypeCourse = theRSide.graduatetypeCourse;
	return *this;
}