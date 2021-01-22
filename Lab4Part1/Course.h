//Stephania Rey
//Course.h
#ifndef Course_h
#define Course_h
#include<string>

using namespace std;
class Course{
    // declare private variables
    private:
        long courseNumber;
        string courseName;
        int numberOfCredits;
    //declare public methods
    public:
        Course();
        Course(long cnum, string name, int credits);
        void setcourseNumber(long num);
        void setcourseName(string name);
        void setnumberOfCredits(int credits);
        void printCourse();
        long getCourseNumber();
        string getCourseName();
        int getNumberOfCredits();
};
#endif /* Course_h */

