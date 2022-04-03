#include <iostream>
#include <array>
using namespace std;
int get_summation(array<int,10>original,array<int,5>&auxiliary)
{
    array<int,10>peer;
    for(int i=0;i<10;i++)
    {
        peer[i]=original[9-i];
    }
    for(int i=0;i<=5;i++)
    {
        auxiliary[i]=original[i]+peer[i];
    }
}
int main()
{
    array<int,5>auxiliary;
    array<int,10>array;
    cout<< "Please enter 10 integers in order: ";
    for(int i=0;i<array.size();i++)
    {
        cin>>array[i];
    }
    cout<< endl;
    cout<<"You entered the following list of integers: "<<endl;
    for(int i=0;i<array.size();i++)
    {
        cout<< array[i]<<"  ";
    }
    cout<<endl;
    get_summation(array,auxiliary);
    cout<<"The content of auxiliary array is: ";
    for(int i=0;i<5;i++)
    {
        cout<<auxiliary[i]<<"   ";
    }
}