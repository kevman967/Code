#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int height;
int width;
int house=0;
void end() //end the program 
{
    cout << "Sorry you have used up all your tries";
    cout << endl;
    cout << "the program will now terminate";
    exit(0);
}
void housesize();
void question()//ask if they want to draw a house
{
    string ask;
    cout<<"do you want to draw a house?(yes/no)"<<endl;
    cin>>ask;
    if(ask=="yes")
    {
        housesize();
    }
    if(ask=="no")
    {
        if(house>1)
        cout << "Hope you like your " << house <<" houses!";
        if(house==1)
        cout << "Hope you like your " << house <<" house!";
        if(house==0)
        cout << "Thank you for using the program!";
        exit(0);
    }
    else
    {

    }


}
void computation()//draw the house
{
    cout << "welcome";
    cout << endl;
    cout << "Height is " << height << " Width is " << width << ".";
    cout << endl;
    int frontspace=width/2;
    for(int i=2;i<=width;i+=2)
    {
        for(int j=1;j<=frontspace;j++)
        {
            cout<<" ";
        }
        frontspace--;
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    int space=width-2;
    for(int i=1;i<=height;i++)
    {
        cout<<" |";
        for(int j=1;j<=space;j++)
        {
            cout << " ";
        }
        cout<<"|"<<endl;
    }
    for(int j=1;j<=width;j++)
    {
        if(j==1)
        cout<<" ";
        cout<<"-";
    }
    cout<<endl<<endl;
    house++;
    question();
}
void housesize()//ask the user the size of the house
{
    cout<< "please enter the height of the house";
    cin>> height;
        for(int i=1; i<10;i++)
        {
            int check;
            cout << "Please enter the width of the house";
            cout << endl;
            cout << "(Note: the width must be bigger than 2 and must be an even number";
            cout << endl;
            cin >> width;
            check = width%2;
            
            
            if (width<=2)//check if width is <= 2
            {
            cout <<"You cannot use this width because it is less than or equal to 2";
            cout <<endl;
            cout <<"please try again"; 
            cout <<endl;
            if(i==3) 
                    end();
            continue;
            }
            else if (check!=0)
            {
                cout <<"You cannot use this width because it is an odd number";
                cout << endl;
                cout << "please try again";
                cout <<endl;
                if(i==3) 
                    end();
            }
            else computation();
        }
}
void welcome()//ask the user for their name and welcome them
{
    string name;
    cout << "-----------------------------------";
    cout << endl;
    cout<< "      House Drawing Program";
    cout<<endl;
    cout<<"-----------------------------------";
    cout << endl;


    cout << "What is your first name?";
    cin >> name;
    cout << "Hello " << name << " welcome to the house building application.";
    cout << endl;
    question();
}
int main()//start of the program
    {
        welcome(); //ask user for name and welcome's to program
        return 0;
    }

