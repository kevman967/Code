
#include "student.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
    string type1;
    string major1;
    double gpa1;
    student one;
    student two;
    cout<<"What type of student do you want to create? ";
    cin>>type1;
    one.settype(type1);
    cout<<endl<<"What is the GPA of the student? ";
    cin>>gpa1;
    one.setgpa(gpa1);
    cout<<endl<<"Major? ";
    cin>>major1;
    one.setmajor(major1);


}