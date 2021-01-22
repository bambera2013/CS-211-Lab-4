#ifndef Instructor_h
#define Instructor_h
#include "Course.h"

class Instructor{
    private: //declare private variable
        string firstName;
        string lastName;
        char gender;
        long employeeID;
        string officeNum;
        Course courses[3];          // object
    public: //declare public variable
        Instructor();               //
        Instructor(string fname, string lname, char gen, long id, string num, Course c[]);
        void setFirstName(string name);
        void setLastName(string name);
        void setGender(char g);
        void setEmployeeID(long id);
        void setOfficeNum(string num);
        void setCourses(Course courses[]);
        string getFirstName();
        string getLastName();
        char getGender();
        string getOfficeNum();
        long getEmployeeID();
        void print();
};
#endif /* Instructor_h */
