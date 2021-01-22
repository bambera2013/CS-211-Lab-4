//Stephania Rey
//Lab4P2
#include "Course.h"
#include "Instructor.h"
#include <iostream>
#include <set>

using namespace std;
int main()
{
    //PART 2        //overloaded constructor
    Course c[3] = {Course(21540, "CS211",3), Course(21541, "CS211", 1), Course(21345, "CS331", 3)};
    Instructor ins1("Mayssaa", "Najjar", 'F', 2390876, "ACD324", c);
    cout << "instructor 1 has the following details:" << endl;
    ins1.print();
    cout << endl;

    Instructor ins2;  //default constructor
    cout << "instructor 2 default details:" << endl;
    ins2.print();
    cout << endl;


    string fname, lname, offnum;
    long id;
    char gen;

    // Second Instructor
    fname = "Michelle";
    ins2.setFirstName(fname);
    lname="James";
    ins2.setLastName(lname);
    gen = 'F';
    ins2.setGender(gen);
    id = 2390878;
    ins2.setEmployeeID(id);
    offnum ="SBSB3024";
    ins2.setOfficeNum(offnum);

    Course cc[3] = {Course(24540, "CS111",3), Course(24541, "CS111", 1), Course(22275, "CS351", 3)}; //overloaded

    ins2.setCourses(cc);
    cout << "instructor 2 courses details:" << endl;
    ins2.print();
    return 0;
}
