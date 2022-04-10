#include <iostream>
#include <fstream>
using namespace std;
int main() {
ifstream inFile;
inFile.open("test.txt");
// exit program if unable to find file
if (!inFile) {
cout << "File could not be opened" << endl;
}
else {
int grade; // the grade
inFile >> grade;
while (!inFile.eof()) {
cout << "Grade: " << grade << endl;
inFile >> grade;
}
inFile.close();
}
return 0;
}
