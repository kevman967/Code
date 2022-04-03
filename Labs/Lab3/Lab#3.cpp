#include <iostream>
using namespace std;
void compute(int number)
{
    for(int j=number;j>0;j=j-3)
    {
        for(int i=j; i>0;i=i-3)
        {
            cout<< i<< "    ";
        }
    cout<<endl;
    }
}
int main()
{
    int number;
    cout << "enter a number that is a multiple of 3: ";
    cin >> number;
    int remainder = number%3;
    if (remainder!=0)
        main();
    else
        compute(number);
}