#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter 2 Integer number: ";
    cin>>x>>y;

    if(x>y)
    {
        cout<<x<<" is getter than "<<y<<".";
    }
    else
        cout<<y<<" is getter than "<<x<<".";
    getch();
}
