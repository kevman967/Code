#include <iostream>
#include <cstdlib>
#include "Department.cpp"
using namespace std;

// Menu function
int menu()
{
int choice;
// Displays menu
cout<<"\n\n ************ MENU ************ ";
cout<<"\n 1 - Add Employee. \n 2 - Delete Employee \n 3 - Search Employee \n 4 - List Employee"
<<"\n 5 - Number of Employees \n 6 - Exit.";

// choice
cout<<"\n Enter choice ";
cin>>choice;
return choice;
}

int main()
{
Department dept("1001", "Account", "Maintains accounts");

do
{
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
}
}while(1);
return 0;
}