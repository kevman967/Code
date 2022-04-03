
#include "Point.h"

int main()
{
Point p1;
Point p2;
cout<<"The initial coordinates of P1 are "<<p1.getx()<<" "<<p1.gety()<<endl;
p1.setx(5);
cout<<"The new coordinates of P1 are "<<p1.getx()<<" "<<p1.gety()<<endl;
p2.setx(5);
cout<<"comparison results is  "<<p1.compare_p(p2)<<endl;
Point p3=p1.reverse();
cout<<"The reverse Point coordinates are "<<p3.getx()<<" "<<p3.gety()<<endl;
p1.moveBy(4);
cout<<"The coordinates of p1 after moveBy 4 are "<<p1.getx()<<" "<<p1.gety()<<endl;



	return 0;

	} // end main
