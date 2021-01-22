//Stephania Rey
//Course.cpp
#include "Course.h"
#include<iostream>
#include<string>
using namespace std;

// default constructor that sets courseNumber to 0, courseName to “”, and numberofCredits to 0.
Course::Course(){
    courseNumber = 0;
    courseName = "";
    numberOfCredits = 0;
}

//overloaded constructor takes 3 parameters
Course::Course(long cnum,string cname,int credits){
    courseNumber = cnum;
    courseName = cname;
    numberOfCredits = credits;
}

// set methods to set course object parameters
void Course::setcourseNumber(long cnum){
    courseNumber = cnum;
}

void Course::setcourseName(string cname){
    courseName = cname;
}

void Course::setnumberOfCredits(int credits){
    numberOfCredits = credits;
}

// print method to print the course object
void Course::printCourse(){
    cout << "Course Number:\t\t" << courseNumber << endl;
    cout << "Course Name:\t\t" << courseName << endl;
    cout << "Number of Credits:\t" << numberOfCredits << endl;
    cout << endl;
}
