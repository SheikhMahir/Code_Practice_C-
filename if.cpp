#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter ur number: ";
    cin>>x;

    if(x>0)
    {
        cout<<"U have entered Positive number.";
    }
    else if(x<0)
    {
     cout<<"U have entered Negative number.";
    }
    else
        cout<<"U have entered Neutral/0 number.";

    getch();
}
