#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    while(1)
    {
        double x,y,z;
        char o;
        cout<<"Enter ur calculation: ";
        cin>>x>>o>>y;
        int a=x,b=y;

        switch(o)
        {
        case '+':
            z=x+y;
            cout<<x<<o<<y<<"="<<z<<"\n";
            break;
        case '-':
            z=x-y;
            cout<<x<<o<<y<<"="<<z<<"\n";
            break;
        case '*':
            z=x*y;
            cout<<x<<"x"<<y<<"="<<z<<"\n";
            break;
        case '/':
            z=x/y;
            cout<<x<<"/"<<y<<"="<<z<<"\n";
            break;
        case '%':
            z=a%b;
            cout<<a<<"%"<<b<<"="<<z<<"\n";
            break;
        }

        getch();
   }
}
