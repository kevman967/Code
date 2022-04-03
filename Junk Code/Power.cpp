#include<stdio.h>
#include<iostream>
using namespace std;
int power(int base,int exponent)
{
if(exponent==1) return base;
else return base*power(base,exponent-1);
}

int main()
{
int base;
int exponent;
//printf("Enter base and exponent to find base ^ exponent ");
//scanf("%d%d",&base,&exponent);
cout << "enter base";
cin >> base;
cout << "enter exponent";
cin >> exponent;
printf("%d ^ %d = %d",base,exponent, power(base,exponent));
return 0;
}