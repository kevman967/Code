#include "house.cpp"
using namespace std;
int main()
{
    int age;
    string type;
    double build_cost;
    house *one=nullptr;
    one = new house();
    house *two=nullptr;
    two = new house();

    cout<< "What is the build cost of the first house?";
    cin >> build_cost;
    one->setbuild_cost(build_cost);

    cout<<endl<<"What is the type?";
    cin >> type;
    one->settype(type);

    cout<<endl<<"What is the age?";
    cin >> age;
    one->setage(age);

    cout<<endl;

    cout<<endl<<"What is the build cost of the second house?";
    cin >> build_cost;
    two->setbuild_cost(build_cost);

    cout<<endl<<"What is the type?";
    cin >> type;
    two->settype(type);

    cout<<endl<<"What is the age?";
    cin >> age;
    two->setage(age);

    cout<<endl<<endl<<"The estimated price for both houses are: "<<endl;
    cout<<one->estimateprice()<<endl;
    cout<<two->estimateprice()<<endl;

    cout<<"Comparing prices:"<<endl;
    cout<<two->compareprice(*one)<<endl;
    
    cout<<"Are two houses similar?"<<endl;
    if(two->similar(*one) == true)
        cout<<"yes";
    else
        cout<<"no";
}