#include <iostream>
using namespace std;
void compute(int number)
{
    for(int i=number;i>0;i=i-2)
    {
        for(int k=number; k>=i;k=k-2)
        {
            cout << k << "  ";
        }
        cout << endl;
    }
    exit(0);
}
int main()
{
    int number;
    cout << "enter an even number: ";
    cin >> number;
    int remainder = number%2;
    if (remainder!=0 )
        main();
    else
        compute(number);
    
}