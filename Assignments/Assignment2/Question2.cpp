#include <iostream>
#include <iomanip>
using namespace std;

void function1(int integer1, int integer2)
{
    cout<<"List of numbers in this interval which are multiple of both 3 and 7: ";
    for(integer1;integer1<=integer2;integer1++)
    {
        int remainder1=integer1;
        int remainder2=integer1;
        remainder1=remainder1%3;
        remainder2=remainder2%7;
        if(remainder1!=0)
            continue;
        if(remainder2!=0)
            continue;
            else
                cout<< integer1<<" ";
    }
}
void function2(int integer1,int integer2,int* result)
{
    *result = integer2-integer1;
}
double function3(int lower,int upper)
{
    double sum=0.0;
    for(int i=lower;i<=upper;i++)
    {
        sum= sum+(1.0/i);
    }
    return sum;
}
int main()
{
    int integer1;
    int integer2;
    char character;
    cout<<"Hello and welcome to the program!" << endl;
    cout<<"You will need to enter 2 positive integers"<<endl;
    cout<<"Please enter the first positive integer(lower bound): ";
    cin>>integer1;
    cout<<"Now, enter the second positive integer(upper bound): ";
    cin>>integer2;
    cout<<"Next, enter a character";
    cin>>character;
    switch(character)
    {
        case 'a':
            function1(integer1,integer2);
            break;
        case 'b':{
            int result;
            function2(integer1,integer2,&result);
            cout<<"The differences between the two numbers is "<<result;
            break;}
        case 'c':{
            double result3 = function3(integer1,integer2);
            cout<<setprecision(3)<<"The value of sum is "<<result3;
            break;}
        default:{
            cout<<"invalid input"<<endl;
            exit(0);
            }
    }
}