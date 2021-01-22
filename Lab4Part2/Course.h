#ifndef Course_h
#define Course_h
#include <string>
using namespace std;

class Course{
    private: // declare private variables
        long courseNumber;
        string courseName;
        int numberOfCredits;
    public: //declare public methods
        Course();              // default constructor
        Course(long cnum, string name, int credits);       // overloaded constructor
        void setCourseNumber(long num);
        void setCourseName(string name);
        void setNumberOfCredits(int credits);
        long getCourseNumber();
        string getCourseName();
        int getNumberOfCredits();
        void print();
};
#endif /* Course_h */
