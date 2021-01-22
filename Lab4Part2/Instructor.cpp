#include <iostream>
#include "Instructor.h"
#include "Course.h"
using namespace std;

Instructor::Instructor(){           //declare default constructor
    firstName = "";
    lastName = "";
    gender = ' ';
    employeeID = 0;
    officeNum = "";
}

Instructor::Instructor(string fname, string lname, char gen, long id, string num, Course c[]){      // overloaded constructor
    firstName = fname;
    lastName = lname;
    gender = gen;
    employeeID = id;
    officeNum = num;
    for(int i = 0; i < 3; i++)
        courses[i] = c[i];
}

void Instructor::setFirstName(string name){
    firstName = name;
}

void Instructor::setLastName(string name){
    lastName = name;
}

void Instructor::setGender(char g){
    gender = g;
}

void Instructor::setEmployeeID(long id){
    employeeID = id;
}

void Instructor::setOfficeNum(string num){
    officeNum = num;
}

void Instructor::setCourses(Course c[]){
    for(int i = 0; i < 3; i++)
    courses[i] = c[i];
}

string Instructor::getFirstName(){
    return firstName;
}

string Instructor::getLastName(){
    return lastName;
}

char Instructor::getGender(){
    return gender;
}

string Instructor::getOfficeNum(){
    return officeNum;
}

long Instructor::getEmployeeID(){
    return employeeID;
}

void Instructor::print(){//print function
    cout << firstName << " " << lastName << " " << gender
    << " " << employeeID << " " << officeNum ;
    for(int i = 0; i < 3; i++)
        cout << " " << courses[i].getCourseNumber() << " " << courses[i].getCourseName() << " " << courses[i].getNumberOfCredits();
    cout << endl;
}
