#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char r;
    do
    {
        int formula;
        float F,C,K,temp;

        cout<<"Select Converter: \n\n1. Celsius to Fahrenheit.\n2. Fahrenheit to Celsius.\n3. Celsius to Kelvin.\n4. Fahrenheit to Kelvin.\n5. Kelvin to Celsius.\n6. Kelvin to Fahrenheit.\n\nInput Converter Number: ";
        cin>>formula;

        switch(formula)
        {
        case 1:
            cout<<"Enter Celsius Unit: ";
            cin>>C;
            temp=(1.8*C)+32;                 //C->F
            cout<<C<<"\370C is equal to "<<temp<<"\370F.";
            break;

        case 2:
            cout<<"Enter Fahrenheit Unit: ";
            cin>>F;
            temp=(F-32)*(5.0/9);             //F->C
            cout<<F<<"\370F is equal to "<<temp<<"\370C.";
            break;

        case 3:
            cout<<"Enter Celsius Unit: ";
            cin>>C;
            temp=C+273.15;                  //C->K
            cout<<C<<"\370C is equal to "<<temp<<"\370K.";
            break;

        case 4:
            cout<<"Enter Fahrenheit Unit: ";
            cin>>F;
            temp=(F-32)*(5.0/9)+273.15;      //F->K
            cout<<F<<"\370F is equal to "<<temp<<"\370K.";
            break;

        case 5:
            cout<<"Enter Kelvin Unit: ";
            cin>>K;
            temp= K-273.15;                  //K->C
            cout<<K<<"\370K is equal to "<<temp<<"\370C.";
            break;

        case 6:
            cout<<"Enter Kelvin Unit: ";
            cin>>K;
            temp=(K-273.15)*1.8+32;          //K->F
            cout<<K<<"\370K is equal to "<<temp<<"\370F.";
            break;

        default:
            cout<<"You haven't select any Converter Correctly.";

        }

        cout<<"\n\nDo you want to covert more(Y/N)?\n";
        cin>>r;
    }
    while((r == 'Y') || (r == 'y'));


    getch();
}
