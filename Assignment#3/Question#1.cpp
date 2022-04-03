#include <iostream>
#include <array>
#include <cstddef>
using namespace std;
void record(array<int,101> &grades,int student)
{
    for(int i=student;i!=0;i--)//there might be an unecessary variable in here 
    {
        int input;
        cout<<"You have "<< i<< " grades left to input."<< endl;
        cout<< "Input a grade: ";
        cin >>input;
        cout<<endl;
        grades[input]++;

    }
}
void highest(array<int,101>&grades)//make sure to test every scenario
{
    cout<< "1- 4 highest grades: ";
    array<int,101>highest;
    for(int i=0;i<101;i++)
    {
        highest[i]=grades[i];
    }
    int grade=100;
    for(int i=0;i<4;grade--)
    {
        if(highest[grade]==0)
            continue;
        else
        {
            highest[grade]--;
            cout<<grade<<"  ";
            i++;
            if(highest[grade]!=0)
                grade++;
        }
    }
    cout<<endl;
}
void lowest(array<int,101>&grades)
{
    cout<<"2- 4 lowest grades:  ";
    array<int,101>lowest;
    for(int i=0;i<101;i++)
    {
        lowest[i]=grades[i];
    }
    int grade =0;
    for(int i=0;i<4;grade++)
    {
        if(lowest[grade]==0)
            continue;
        else
        {
            lowest[grade]--;
            cout<<grade<<"  ";
            i++;
            if(lowest[grade]!=0)
                grade--;
        }
    }
    cout<<endl;
}
void average(array<int,101>&grades,int student)
{
    int sum=0;
    for(int i=0;i<101;i++)
    {
        sum=sum+(i*grades[i]);
    }
    int number=sum/student;
    cout<<"3- Average grade:    "<<number;
}
void median(array<int,101>&grades, int student)
{
    int remainder= student%2;
    if(remainder!=0)
    {
        int median_pos=(student/2)+1;
        int sum;=0;
        int median=0;
        for(int i=0;sum<median_pos;i++)
        {
            sum=sum+grades[i];
            median =i;
        }
        
    }
}

int main()
{
    const size_t array_size {101};
    size_t student;
    cout<<"Enter the amount of students: "<< endl;
    cin>> student;
    array<int,array_size>grades;// need element 0 to 100
    record(grades,student);
    highest(grades);
    lowest(grades);
    average(grades,student);
    median(grades,student);


}
