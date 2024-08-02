#include<iostream>
#include<conio.h>
using namespace std;
 int main()
 {
     int a,b,sum,sub,mul,div,rem;

     cout<<"Enter 2 number : ";
     cin>>a>>b;

     sum=a+b;
     sub=a-b;
     mul=a*b;
     div=a/b;
     rem=a%b;

     cout<<"Sum of those number is "<<sum <<endl <<"Sub of those number is "<<sub <<endl <<"Mul of those number is "<<mul <<endl <<"Div of those number is "<<div <<endl <<"Rem of those number is "<<rem;

     getch();
 }
