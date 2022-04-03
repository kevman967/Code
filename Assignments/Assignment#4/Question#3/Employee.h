#ifndef EMPLOYEE_h
#define EMPLOYEE_h

#include <string>
using namespace std;

class Employee
{
// data
string name;
double salary;
public:
// member function
Employee();
Employee(string, double);
void modifyName(string);
void modifySalary(double);
string returnName();
double returnSalary();
void showEmployee();
};
#endif
