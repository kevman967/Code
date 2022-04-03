#include <iostream>
#include "Employee.h"
using namespace std;

// constructor
Employee::Employee()
{
name = "";
salary = 0.0;
}

Employee::Employee(string string1, double double1)
{
name = string1;
salary = double1;
}

// Function to set name
void Employee::modifyName(string string1)
{
name = string1;
}// End of function

// Function to set salary
void Employee::modifySalary(double double1)
{
salary = double1;
}// End of function

// Function to return name
string Employee::returnName()
{
return name;
}// End of function

// Function to return salary
double Employee::returnSalary()
{
return salary;
}// End of function

// Function to display employee information
void Employee::showEmployee()
{
cout<<"\n Name: "<<name<<"\n Salary: $"<<salary;
}// End of function