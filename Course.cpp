#include "Course.h"
#include <iostream>
using namespace std;

Course::Course(){       //default constructor
    courseNumber = 0;
    courseName = "";
    numberOfCredits = 0;
}

Course::Course(long cnum, string name, int credits){        //overloaded constructor with 3 parameters
    courseNumber = cnum;
    courseName = name;
    numberOfCredits = credits;
}
// set methods to set course object parameters
void Course::setCourseNumber(long num){
    courseNumber = num;
}

void Course::setCourseName(string name){
    courseName = name;
}

void Course::setNumberOfCredits(int credits){
    numberOfCredits = credits;
}

long Course::getCourseNumber(){
    return courseNumber;
}

string Course::getCourseName(){
    return courseName;
}

int Course::getNumberOfCredits(){
    return numberOfCredits;
}

void Course::print(){ // print method to print the course object
    cout << "Course Number: " << courseNumber << endl;
    cout << "Course Name: " << courseName << endl;
    cout << "Number of Credits: " << numberOfCredits << endl;
    cout << endl;
}
