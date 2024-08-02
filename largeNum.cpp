#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter 3 integer number: ";
    cin>>x>>y>>z;

    if(x>y & x>z)
    {
        cout<<x<<" is getter than "<<y<<" & "<<z<<".";
    }
    else if(y>x & y>z)
    {
        cout<<y<<" is getter than "<<x<<" & "<<z<<".";
    }
    else
        cout<<z<<" is getter than "<<x<<" & "<<y<<".";

    getch();
}
