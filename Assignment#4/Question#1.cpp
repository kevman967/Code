#include <iostream>
#include <array>
using namespace std;
const int arraysize = 3;//determines the size of the array (change this value to create different arrays)
void printarray(array<array<int,arraysize>,arraysize>array1);
void setarray(array<array<int,arraysize>,arraysize>&array1);
void computearray(array<array<int,arraysize>,arraysize>array1);
int main()
{
    array<array<int,arraysize>,arraysize>array1;
    setarray(array1);
    printarray(array1);
    computearray(array1);
}
void computearray(array<array<int,arraysize>,arraysize>array1)//adds both diagonals while also printing the calculation and the answer
{
    int answer=0;
    int j=0;
    for(int i=0;i<arraysize;i++)
    {
    int k=arraysize-j-1;
    answer=array1[i][j]+array1[i][k]+answer;
    cout<<array1[i][j]<<" + "<<array1[i][k]<<" + "<<endl;
    j++;
    }
    cout<<endl<<endl;
    if(arraysize%2!=0)//checks wether the arraysize is an odd number and deletes the center element from the answer so it does not get counted twice 
    {
        answer=answer-array1[(arraysize/2)][(arraysize/2)];
        cout<<"Remove "<<array1[(arraysize/2)][(arraysize/2)]<<endl;
    }   
    cout<<"The answer is: "<<answer;

}
void setarray(array<array<int,arraysize>,arraysize>&array1)//sets a value for every element in the array
{
    for(int i=0;i<arraysize;i++)
    {
        for(int j=0;j<arraysize;j++)
        {
            array1[i][j]=i+j+1;
        }
    }
}
void printarray(array<array<int,arraysize>,arraysize>array1)//prints the array 
{
    for(int i=0;i<arraysize;i++)
    {
        for(int j=0;j<arraysize;j++)
        {
            cout<<array1[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
}