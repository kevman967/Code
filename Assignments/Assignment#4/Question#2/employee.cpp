#include "employee.h"
employee::employee(int id1,int year1)
{
    id=id1;
    firstname="";
    lastname="";
    birth="";
    address="";
    yearhired=year1;
    salary=0.0;
    areacode=0;
    telephone="";
}
//return the employeeid
int employee::returnid()
{
    return id;
}
//return first name
string employee::returnfirstname()
{
    return firstname;
}
//change first name
void employee::modifyfirstname(string firstname1)
{
    firstname=firstname1;
}
//return last name
string employee::returnlastname()
{
    return lastname;
}
//change last name
void employee::modifylastname(string lastname1)
{
    lastname=lastname1;
}
//return the year of the employee hired
int employee::returnyearhired()
{
    return yearhired;
}
//return their full name
string employee::returnfullname()
{
    string fullname=firstname+lastname;
    return fullname;
}
//return their birthday
string employee::returnbirth()
{
    return birth;
}
//change their birthday
void employee::modifybirth(string birth1)
{
    birth=birth1;
}
//return their salary
double employee::returnsalary()
{
    return salary;
}
void employee::modifysalary(double salary1)
{
    salary=salary1;
}
//return their address
string employee::returnaddress()
{
    return address;
}
//change their address
void employee::modifyaddress(string address1)
{
    address=address1;
}
//return their telephone
string employee::returntelephone()
{
    return telephone;
}
//return their areacode
int employee::returnareacode()
{
    return areacode;
}
//change telephone number 
void employee::modifytelephone(string telephone1)
{
    telephone=telephone1;
}
//change area code
void employee::modifyareacode(int areacode1)
{
    areacode=areacode1;
}
//check if they have the same last name
bool employee::samelastname(string lastname1)
{
    if(lastname==lastname1)
        return true;
    else
        return false;
}
//check if they have the same salary of same year hired
bool employee::samesalaryyear(double salary1,int yearhired1)
{
    if(salary==salary1||yearhired==yearhired1)
        return true;
    else
        return false;
}