#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter ur number: ";
    cin>>x;

    if(x>100)
        cout<<"U have enter invalid number. Please enter correct number.";
    else if(x>=33)
    {
        if(x>=80)
        {
            cout<<"Ur grade is A+.";
        }
        else if(x>=70)
        {
            cout<<"Ur grade is A.";
        }
        else if(x>=60)
        {
            cout<<"Ur grade is A-.";
        }
        else if(x>=50)
        {
            cout<<"Ur grade is B.";
        }
        else if(x>=40)
        {
           cout<<"Ur grade is C.";
        }
        else
            cout<<"Ur grade is D.";
    }
    else
    cout<<"U r fail. Try best next time.";


    getch();
}
