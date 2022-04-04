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

void Employee::modifyName(string string1)
{
name = string1;
}

// Function to set salary
void Employee::modifySalary(double double1)
{
salary = double1;
}

// Function to return name
string Employee::returnName()
{
return name;
}

// Function to return salary
double Employee::returnSalary()
{
return salary;
}

// Function to display employee information
void Employee::showEmployee()
{
cout<<"\n Name: "<<name<<"\n Salary: "<<salary;
}