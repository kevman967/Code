#ifndef DEPARTMENT_h
#define DEPARTMENT_h

#include "Employee.h"
using namespace std;

class Department
{
// Data 
string iden;
string departmentName;
string departmentHistory;
Employee emp[25];
int current;
public:
// functions
Department();
Department(string, string, string);

string getIden();
string getdepartmentName();
string getdepartmentHistory();
int getNumberOfEmployees();

void setIden(string);
void setdepartmentName(string);
void setdepartmentHistory(string);

void addEmployee();
void removeEmployee();
int searchEmployee();
void listEmployees();
};
#endif