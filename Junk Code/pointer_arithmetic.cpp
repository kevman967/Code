#include <iostream>
using namespace std;
int main()
{
int x[] = { 3,5,7,9,11 };
int *p; // declares a pointer to integers
int arraySize;
p = &x[0]; //p points to the first element of the array x
arraySize = sizeof(x) / sizeof(x[0]); //returns the array size
cout << "Array size is: " << arraySize << endl;
cout << "Address" << "\t\t" << "Content" << endl;
for (int i = 0; i < arraySize; i++)
{
cout << p << '\t' << *p << endl;
p++;
}
return 0;
}