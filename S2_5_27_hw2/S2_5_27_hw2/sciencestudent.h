#ifndef SCIENCESTUDENT_H
#define SCIENCESTUDENT_H
#include<iostream>
#include<string>
#include"student.h"
using std::string;

class ScienceStudent : public Student {
public:
	ScienceStudent();
	ScienceStudent(string theProperties, string theGraduatetypeCourse, string theUniversityName, int theRegistrationNumber, UniversityStaff& theObject);
	ScienceStudent(ScienceStudent& theObject);
	string getProperties()const;
	string getGraduatetypeCourse()const;
	ScienceStudent& operator = (const ScienceStudent & theRSide);
private:
	string properties;
	string graduatetypeCourse;
};

#endif