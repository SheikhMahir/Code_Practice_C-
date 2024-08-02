#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    while(1)
    {
        int b,d,e,s,i;
        cout<<"Enter starting of series: ";
        cin>>s;
        cout<<"Enter distance: ";
        cin>>d;
        cout<<"Enter ending of series: ";
        cin>>e;

        for(i=1; i<=e; i++)
        {
            cout<<s<<"+";
            s=s+d;
        }

        cout<<endl<<endl;
        getch();
    }
}

