#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int,5>array1={7,5,3,9,1};
    cout<<"array order is: ";
    for(int i=0;i<array1.size();i++)
    {
        cout<< array1[i]<<" ";
    }
    for(int i=0;i<array1.size();i++)
    {
        for(int j=0;j<array1.size()-1;j++)
        {
            if(array1[j]>array1[j+1])
            {
                int hold=array1[j];
                array1[j]=array1[j+1];
                array1[j+1]=hold;
            }
            else
                continue;
                

        }
    }
    cout<<endl<<"new order is: ";
    for(int i=0;i<array1.size();i++)
        cout<< array1[i]<<" ";
}