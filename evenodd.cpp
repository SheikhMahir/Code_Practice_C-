#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a Integer number: ";
    cin>>x;

    if(x%2==0)
    {
        cout<<"It's a Even number.";
    }
    else
        cout<<"It's a Odd number.";
    getch();
}
