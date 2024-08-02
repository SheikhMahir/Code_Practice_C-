#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,sum,sub,mul,div,rem;

    cout<<"Enter 2 numbers: ";
    cin>> a >> b ;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(10);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    //rem = a % b;

    //cout<<showpoint;


    cout<<setw(25)<<"Sum of those number is "<<sum <<endl<<setw(25)<<"Sub of those number is "<<sub <<endl<<setw(25)<<"Mul of those number is "<<mul <<endl<<setw(25)<<"Div of those number is "<<div <<endl<<setw(25)<<
    "Rem of those number is "<<rem;

       getch();
}
