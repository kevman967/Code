#include <iostream>
using namespace std;
void compute(int*);
int main(){
    int a =5;
    int *ptr;//declare a pointer
    ptr = nullptr; // initialize pointer as nullptr
    ptr = &a; // assign memory adress of a to the pointer
    cout << "ptr has been the assigned the adress of variable a which is: "<< ptr << endl;
    compute(&a);
    cout<< "changed a with a function. The new data is: "<< *ptr << endl;
    cout<< "This number shows the size of the memory allocated for a which is: "<< sizeof(*ptr)<<endl;//sizeof() returns the size of memory in bytes
    int *arrayptr;
    arrayptr = new int[10]; // created an array during program execution
    *arrayptr = 5;
    arrayptr++;
    *arrayptr = 22;
    
}

void compute(int *ptr)// dont need to return value because i changed the memory adress which i can already access
{
    *ptr = 56;
}