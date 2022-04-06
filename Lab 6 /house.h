#include <string>
#include <iostream>
using namespace std;
class house
{
public:
    house();
    house(int,string,double);
    int getage();
    string gettype();
    double getbuild_cost();
    void setage(int);
    void settype(string);
    void setbuild_cost(double);
    int estimateprice();
    bool similar(house);
    string compareprice(house);




private:
    int age;
    string type;
    double build_cost;


};