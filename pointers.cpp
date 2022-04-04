#include <iostream>
using namespace std;
int main (){
    int a=4;
    int* p{nullptr};
    p=&a;
    *p= *p * *p;
    cout<<p;
    return 0;
}