#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter any integer: ";
    cin>>x;

    if(x<0)
    {
        cout<<"Absulate value of this number is "<<(-x)<<".";
    }
    else
        cout<<"Absulate value of this number is "<<x<<".";

    getch();
}
