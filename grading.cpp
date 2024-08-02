#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter ur marks: ";
    cin>>x;

    if(x>100)
    {
        cout<<"U have entered invalid number.\nPlease enter correct number.";
    }
    else if(x>80)
    {
        cout<<"Ur grade is A+.";
    }
    else if(x>70)
    {
        cout<<"Ur grade is A.";
    }
    else if(x>60)
    {
        cout<<"Ur grade is A-.";
    }
    else if(x>50)
    {
        cout<<"Ur grade is B.";
    }
    else if(x>40)
    {
        cout<<"Ur grade is C.";
    }
    else if(x>33)
    {
        cout<<"Ur grade is D.";
    }
    else
        cout<<"U r fail.";

    getch();
}
