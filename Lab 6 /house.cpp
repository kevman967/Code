#include "house.h"
house::house()
{
    age =0;
    type = "";
    build_cost = 0.0;
}
house::house(int age1,string type1,double build_cost1)
{
age = age1;
type = type1;
build_cost = build_cost1;
}
int house::getage()
{
    return age;
}
string house::gettype()
{
    return type;
}
double house::getbuild_cost()
{
    return build_cost;
}
void house::setage(int age1)
{
    age = age1;
}
void house::settype(string type1)
{
    type = type1;
}
void house::setbuild_cost(double build_cost1)
{
    build_cost=build_cost1;
}
int house::estimateprice()
{
    int price;
    price = build_cost+age*(0.01*build_cost);
    return price;
}
bool house::similar(house one)
{
    if(age == one.age && type == one.type)
        return true;
    else
        return false;
}
string house::compareprice(house one)
{
    int two = estimateprice();
    int one1 = one.estimateprice();
    if(one1>two)
        return "House 1 is more expensive";
    if(two>one1)
        return "House 2 is more expensive";
    
}
