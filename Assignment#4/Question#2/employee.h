#include <string>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
class employee
{
    private:
        int id;
        string firstname;
        string lastname;
        string birth;
        string address;
        int yearhired;
        double salary;
        int areacode;
        string telephone;
    public:
        employee(int,int);
        int returnid();
        string returnfirstname();
        void modifyfirstname(string);
        string returnlastname();
        void modifylastname(string);
        int returnyearhired();
        string returnfullname();
        string returnbirth();
        void modifybirth(string);
        double returnsalary();
        void modifysalary(double);
        string returnaddress();
        void modifyaddress(string);
        string returntelephone();
        int returnareacode();
        void modifytelephone(string);
        void modifyareacode(int);
        bool samelastname(string);
        bool samesalaryyear(double,int);



};
#endif