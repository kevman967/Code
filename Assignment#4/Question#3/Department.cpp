#include "Department.h"
#include "Employee.cpp"
#include <iostream>
#include <string>
using namespace std;

// Default constructor 
Department::Department()
{
iden = departmentName = departmentHistory = "";
current = 0;
}

Department::Department(string string1, string string2, string string3)
{
iden = string1;
departmentName = string2;
departmentHistory = string3;
current = 0;
}

string Department::getIden()
{
return iden;
}

// Function to return department name
string Department::getdepartmentName()
{
return departmentName;
}

// Function to return department history
string Department::getdepartmentHistory()
{
return departmentHistory;
}

// Function to return number of employees
int Department::getNumberOfEmployees()
{
return current;
}

// Function to set id
void Department::setIden(string id)
{
iden = id;
}

// Function to set department name
void Department::setdepartmentName(string string1)
{
departmentName = string1;
}

// Function to set history
void Department::setdepartmentHistory(string string1)
{
departmentHistory = string1;
}

// Function to add an employee
void Department::addEmployee()
{
string name;
double salary;
// Checks if array is full
if(current == 25)
cout<<"\n Department is full.";

else
{
//  employee data
cout<<"\n Enter Employee Name: ";
cin>>name;
cout<<"\n Enter Salary: ";
cin>>salary;
emp[current++] = Employee(name, salary);
}
}

// Function to delete an employee
void Department::removeEmployee()
{
// Calls the function to search an employee
int index = searchEmployee();

if(index == -1)
cout<<"\n Employee record not found to delete.";

else
{
for(int c = index; c < current - 1; c++)
emp[c] = emp[c + 1];
current--;
}
}

int Department::searchEmployee()
{
string name;
cout<<"\n Enter employee name: ";
cin>>name;

for(int c = 0; c < current; c++)
{
if(name.compare(emp[c].returnName()) == 0)
{
emp[c].showEmployee();
return c;
}
}
cout<<"\n Employee "<<name<<" not found.";
return -1;
}

// Function to display department information
void Department::listEmployees()
{
cout<<"\n\n ------------ Department  ------------ ";
cout<<"\n ID: "<<iden<<"\n Department Name: "<<departmentName
<<"\n Department History: "<<departmentHistory<<endl;

for(int c = 0; c < current; c++)
emp[c].showEmployee();
}