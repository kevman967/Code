
#include <string>
#include <iostream>
using namespace std;
class student
{
    private:
        string type;
        double gpa;
        string major;
    public:
        student();
        //student(string,double,string);
        string gettype();
        double getgpa();
        string getmajor();
        void settype(string);
        void setgpa(double);
        void setmajor(string);
        bool equals(string,string);
        void gpa_evaluate(); 
        void printinfo();
};