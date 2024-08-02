#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    while(1)
    {
        int r,c,i,j;
        cout<<"Enter Row & Column size: ";
        cin>>r>>c;
        int x[r][c];

        cout<<endl;

        for(i=0; i<r; i++)
        {
            cout<<"Enter data of "<<i+1<<" No. row: ";
            for(j=0; j<c; j++)
            {
                cin>>x[i][j];
            }
        }

        cout<<endl;

        for(i=0; i<r; i++)
        {
            cout<<"Data of "<<i+1<<" No. row: ";
            for(j=0; j<c; j++)
            {
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<endl;

        getch();
    }
}
