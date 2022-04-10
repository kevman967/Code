#include <iostream>
using namespace std;

int main () {
int x = 50;
int y = 0;
double z = 0;
try {
if( y == 0 ) {
throw "Division by zero condition!";
}
cout << x/y << endl;
} catch (const char* msg) {
cout << msg << endl;
}
return 0;
}