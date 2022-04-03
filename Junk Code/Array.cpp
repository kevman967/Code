#include <iostream>
#include <array>
#include <cstddef>
using namespace std;
int main()
{
    const int m=15;
    const int n=15;
    array<array<int, m>,n> arr;
    for (size_t i=0;i<=m;i++)
    {
        for (int j=0;j<=n;j++)
        {
            arr[i][j]= i+j;
            cout << arr[i][j]<< " ";
        }
        cout<< endl;
    }
    return 0;
}