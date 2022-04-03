#include "Department.h"
#include "Employee.cpp"
#include <iostream>
#include <string>
using namespace std;

// Default constructor to initialize data member to default value
Department::Department()
{
iden = departmentName = departmentHistory = "";
current = 0;
}// End of default constructor

// Parameterized constructor to assign parameter data to data member
Department::Department(string id, string dn, string dh)
{
iden = id;
departmentName = dn;
departmentHistory = dh;
current = 0;
}// End of default constructor

// Function to return id
string Department::getIden()
{
return iden;
}// End of function

// Function to return department name
string Department::getdepartmentName()
{
return departmentName;
}// End of function

// Function to return department history
string Department::getdepartmentHistory()
{
return departmentHistory;
}// End of function

// Function to return number of employees
int Department::getNumberOfEmployees()
{
return current;
}// End of function

// Function to set id
void Department::setIden(string id)
{
iden = id;
}// End of function

// Function to set department name
void Department::setdepartmentName(string dn)
{
departmentName = dn;
}// End of function

// Function to set history
void Department::setdepartmentHistory(string dh)
{
departmentHistory = dh;
}// End of function

// Function to add an employee
void Department::addEmployee()
{
string name;
double salary;
// Checks if current counter value is 25 then full array
if(current == 25)
cout<<"\n Department is full. No more employees can be added.";

// Otherwise add an employee
else
{
// Accepts employee data
cout<<"\n Enter Employee Name: ";
cin>>name;
cout<<"\n Enter Salary: $";
cin>>salary;
// Creates an object using parameterized constructor and assigns it to current index position
// Increase the counter by one
emp[current++] = Employee(name, salary);
}// End of else
}// End of function

// Function to delete an employee
void Department::removeEmployee()
{
// Calls the function to search an employee and store the found index
int index = searchEmployee();

// Checks if found index is -1 then record not found
if(index == -1)
cout<<"\n Employee record not found to delete.";

// Otherwise record found
else
{
// Loops from found index position to end of the list
for(int c = index; c < current - 1; c++)
// Shift each record to left
emp[c] = emp[c + 1];
// Decrease the counter by one
current--;
}// End of else
}// End of function

// Function to search a employee record
int Department::searchEmployee()
{
string name;
// Accept a name to search
cout<<"\n Enter employee name: ";
cin>>name;

// Loops till end of the list
for(int c = 0; c < current; c++)
{
// Checks if user entered name is equals to current employee name
if(name.compare(emp[c].returnName()) == 0)
{
// Calls the function to display found employee
emp[c].showEmployee();
// Returns the loop value as found index
return c;
}// End of if condition
}// End of for loop
cout<<"\n Employee "<<name<<" not found.";
// At the end of the for loop returns -1 for record not found
return -1;
}// End of function

// Function to display department information
void Department::listEmployees()
{
cout<<"\n\n ************ Department Information ************ ";
cout<<"\n Identification Number: "<<iden<<"\n Department Name: "<<departmentName
<<"\n Department History: "<<departmentHistory<<endl;

// Loops till number of employees
for(int c = 0; c < current; c++)
// Calls the function to display employee information
emp[c].showEmployee();
}// End of function