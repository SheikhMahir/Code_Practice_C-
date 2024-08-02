#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    while(1)
    {
    int s,d,e,i;

    cout<<"Enter start of the series: ";
    cin>>s;
    cout<<"Enter distance of each number: ";
    cin>>d;
    cout<<"Enter ending of the series: ";
    cin>>e;

    for(i=s; i<=10; i=i+d)
        {
            cout<<s<<"+";
            s=s+i;
        }

        cout<<"\nSum of the series: "<<s;
        cout<<endl<<endl;

    getch();
    }
}
