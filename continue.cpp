#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    while(1)
    {
        int x,y,i;
        cout<<"Enter number for Multiplication table: ";
        cin>>x;

        for(i=1; i<=10; i++)
        {
            y=x*i;
            cout<<x<<"x"<<i<<"="<<y<<endl;
        }
        cout<<endl;

        getch();
    }
}
