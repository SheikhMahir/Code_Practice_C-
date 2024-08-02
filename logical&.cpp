#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char x;
    cout<<"Enter ur letter: ";
    cin>>x;

    if( x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U' )
    {
        cout<<"This is a vowel.";
    }
    else
        cout<<"This is a consonant.";

    getch();
}
