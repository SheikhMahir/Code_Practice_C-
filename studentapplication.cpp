#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum,ma,mi,i;
    cout<<"Enter students number: ";
    cin>>n;

    int students[n];
    for(i=0; i<n; i++)
    {
        cout<<"Enter marks for student "<<i+1<<" = ";
        cin>>students[i];
        sum=sum+students[i];
    }
    cout<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"Marks of student "<<i+1<<" = "<<students[i]<<endl;
    }

    cout<<"\nSum of student's number: "<<sum;

    ma=students[0];
    for(i=1; i<n; i++)
    {
        if(ma<students[i])
        {
            ma=students[i];
        }
    }
    mi=students[0];
    for(i=1; i<n; i++)
    {
        if(mi>students[i])
        {
            mi=students[i];
        }
    }
    cout<<"\nMaximum number = "<<ma;
    cout<<"\nMinimum number = "<<mi;

    getch();
}
