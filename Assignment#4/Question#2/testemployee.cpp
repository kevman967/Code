#include "employee.cpp"
#include "employee.h"

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string string1;
    double double1;
    int int1;
    employee one(1,1);
    employee two(2,1);
    //enter data for 1st employee
    cout<<"Employee one:"<<endl;
    cout<<"Enter first name: ";
    cin>>string1;
    one.modifyfirstname(string1);
    cout<<endl;
    cout<<"Enter last name: ";
    cin>>string1;
    one.modifylastname(string1);
    cout<<endl;
    cout<<"Enter date of birth: ";
    cin>>string1;
    one.modifybirth(string1);
    cout<<endl;
    cout<<"Enter salary: ";
    cin>>double1;
    one.modifysalary(double1);
    cout<<endl;
    cout<<"Enter address: ";
    cin>>string1;
    one.modifyaddress(string1);
    cout<<endl;
    cout<<"Enter area code: ";
    cin>>int1;
    one.modifyareacode(int1);
    cout<<endl;
    cout<<"Enter 7 digit telephone number: ";
    cin>>string1;
    one.modifyaddress(string1);
    cout<<endl<<endl;
    //enter data for second employee
    cout<<"Employee two:"<<endl;
    cout<<"Enter first name: ";
    cin>>string1;
    two.modifyfirstname(string1);
    cout<<endl;
    cout<<"Enter last name: ";
    cin>>string1;
    two.modifylastname(string1);
    cout<<endl;
    cout<<"Enter date of birth: ";
    cin>>string1;
    two.modifybirth(string1);
    cout<<endl;
    cout<<"Enter salary: ";
    cin>>double1;
    two.modifysalary(double1);
    cout<<endl;
    cout<<"Enter address: ";
    cin>>string1;
    two.modifyaddress(string1);
    cout<<endl;
    cout<<"Enter area code: ";
    cin>>int1;
    two.modifyareacode(int1);
    cout<<endl;
    cout<<"Enter 7 digit telephtwo number: ";
    cin>>string1;
    two.modifyaddress(string1);
    cout<<endl<<endl;
    //details for the 1st employee
    cout<<"Details of employee #1 "<<"ID: "<<one.returnid()<<endl;
    cout<<"Name: "<<one.returnfirstname()<<" "<<one.returnlastname()<<endl;
    cout<<"Date of birth: "<<one.returnbirth()<<endl;
    cout<<"Address: "<<one.returnaddress()<<endl;
    cout<<"Year hired: "<<one.returnyearhired()<<endl;
    cout<<"Salary: "<<one.returnsalary()<<endl;
    cout<<"Phone number: "<<one.returnareacode()<<" "<<one.returntelephone()<<endl;
    cout<<endl;
    //details for the 2nd employee
    cout<<"Details of employee #2 "<<"ID: "<<two.returnid()<<endl;
    cout<<"Name: "<<two.returnfirstname()<<" "<<two.returnlastname()<<endl;
    cout<<"Date of birth: "<<two.returnbirth()<<endl;
    cout<<"Address: "<<two.returnaddress()<<endl;
    cout<<"Year hired: "<<two.returnyearhired()<<endl;
    cout<<"Salary: "<<two.returnsalary()<<endl;
    cout<<"Phone number: "<<two.returnareacode()<<" "<<two.returntelephone()<<endl;
    cout<<endl;
    //other details
    if(one.samelastname(two.returnlastname())==true)
        cout<<"The two employees have the same last name!"<<endl;
    else
        cout<<"These two employees do not have the same last name."<<endl;
    if(one.samesalaryyear(two.returnsalary(),two.returnyearhired())==true)
        cout<<"These two either have the same salary, same hired year or both!"<<endl;
    else
        cout<<"These two do not have the same salary, nor the same year hired."<<endl;
    

}