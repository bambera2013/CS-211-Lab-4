//Stephania Rey
//Lab4 Part1
#include "Course.h"
#include<iostream>
#include<string>
using namespace std;

int main() {
    // declare attributes
    string cname;
    long cnumber;
    int credits;

    // get input from user
    cout << "Enter course number:";
    cin >> cnumber;
    cout << "Enter course name:";
    cin >> cname;
    cout << "Enter number of credits:";
    cin >> credits;
    cout << endl;
    // create course object with 3 params constructor
    Course c1(cnumber,cname,credits);
    // call the print method
    c1.printCourse();

    // create course object with default constructor
    Course c2;
    c2.printCourse();       // prints default constructor

    // get input from user
    cout << "Enter course number:";
    cin >> cnumber;
    cout << "Enter course name:";
    cin >> cname;
    cout << "Enter number of credits:";
    cin >> credits;
    // set the object values using set methods
    c2.setcourseNumber(cnumber);
    c2.setcourseName(cname);
    c2.setnumberOfCredits(credits);
    cout << endl << "course object c2 has " << endl;
    //print the course object.
    c2.printCourse();
}


