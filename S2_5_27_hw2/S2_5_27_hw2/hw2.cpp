#include<iostream>
#include<cstdlib>
#include<string>
#include"sciencestudent.h"
using namespace std;

void outputSCstudent(ScienceStudent&);

int main() {
	UniversityStaff baseStaff("Lin");
	ScienceStudent base("computer science", "undergraduate course", "National University of Tainan", 11259000, baseStaff), scStudent1(base), scStudent2;

	cout << "Science Student 1\n----------------------------" << endl;
	outputSCstudent(scStudent1);
	cout << endl;

	cout << "Science Student 2\n----------------------------" << endl;
	outputSCstudent(scStudent2);
	cout << endl;

	scStudent2 = scStudent1;
	cout << "<copy student 1 to studen 2>" << endl;
	cout << "Science Student 2\n----------------------------" << endl;
	outputSCstudent(scStudent2);
	cout << endl;
}

void outputSCstudent(ScienceStudent& thePerson) {
	cout << "University's Name: " << thePerson.getUniversityName() << endl;
	cout << "Course: " << thePerson.getGraduatetypeCourse() << endl;
	cout << "Registration Number: " << thePerson.getRegistrationNumber() << endl;
	cout << "Properties science discipline: " << thePerson.getProperties() << endl;
	cout << "Proctor: " << thePerson.getProctor() << endl;
}
