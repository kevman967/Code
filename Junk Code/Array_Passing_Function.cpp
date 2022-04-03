#include <iostream>
#include <cstddef>
#include <array>
using namespace std;
void print_array(array<int,5>array)
{
    for(int i=0;i<array.size();i++)
    {
        cout<<array[i]<<"   ";
    }
    cout<<endl;
}
void withoutref(array<int,5>array)
{
    for(int i=0;i<array.size();i++)
    {
        array[i]*=2;
    }
    
}
void withref(array<int,5>&array)
{
    for(int i=0;i<array.size();i++)
    {
        array[i]*=2;
    }
    
}
int main()
{
    const int arraysize = 5;
    array<int,arraysize>array;
    for(int i=0;i<array.size();i++)
    {
        array[i]=i;
    }
    cout<<"Original array size: ";
    print_array(array);
    cout<<"Array modified by x2 without reference:  ";
    withoutref(array);
    print_array(array);
    withref(array);
    print_array(array);

}