#include <iostream>
#include <cstdlib>
#include "Department.cpp"
using namespace std;

// Function to accept display menu, user choice, return user choice
int menu()
{
int ch;
// Displays menu
cout<<"\n\n ************ MENU ************ ";
cout<<"\n 1 - Add Employee. \n 2 - Delete Employee \n 3 - Search Employee \n 4 - List Employee"
<<"\n 5 - Number of Employees \n 6 - Exit.";

// Accept user choice
cout<<"\n What is your choice? ";
cin>>ch;
// Returns user choice
return ch;
}// End of function

// main function definition
int main()
{
// Creates an object of class Department
Department dept("1001", "Account", "Maintains accounts");

// Loops till user choice is not 6
do
{
// Calls the function to accept user choice
// Checks the return value and calls the appropriate function
switch(menu())
{
case 1:
dept.addEmployee();
break;
case 2:
dept.removeEmployee();
break;
case 3:
dept.searchEmployee();
break;
case 4:
dept.listEmployees();
break;
case 5:
cout<<"\n Number of employees: "<<dept.getNumberOfEmployees();
break;
case 6:
exit(0);
default:
cout<<"\n Invalid Choice!!";
}// End of switch case
}while(1);// End of do - while loop
return 0;
}// End of main function