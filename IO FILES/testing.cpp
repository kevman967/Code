#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("test.txt");

    if(!out)
        cout<<"this shit don't work!!!";
    else{
        int grade;
        while(grade!= -1)
        {
            cout << "enter grade (btw use -1 to exit)";
            cin >> grade;
            out << grade << endl;
        }
        out.close();
    }
    return 0;
}