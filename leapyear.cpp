#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a year: ";
    cin>>x;

    if(x%4==0 && x%100!=0)
    {
        cout<<"It's a leap year.";
    }
    else if(x%400==0)
    {
        cout<<"It's a leap year.";
    }
    else
    {
        cout<<"It's not a leap year.";
    }


    getch();
}

