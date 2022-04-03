#include <iostream>
using namespace std;
int main()
{
    int value;
    cout << "Type a number";
    cin >> value;
while(value!=5){
    value=value^2;
    cout << value;
    }
    return 0;
}