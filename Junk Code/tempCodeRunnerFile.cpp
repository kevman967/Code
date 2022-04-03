#include <iostream>
#include <cstddef>
#include <array>

using namespace std;
int main()
{
    int arraysize;
    int array[arraysize];
    cout<<"how big is your array?:  "<<endl;
    cin >>arraysize;
    for(int i=0;i<arraysize;i++)
    {
        array[i]=i;
    }
    cout<< "array:  ";
    for(int i=0;i<arraysize;i++)
    {
        cout<<array[i]<<"   ";
    }
    return 0;
    
}