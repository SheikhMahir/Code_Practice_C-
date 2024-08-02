#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Please enter 1st Number : ");
    scanf("%d",&a);
    printf("Please enter 2nd Number : ");
    scanf("%d",&b);

    x = (a>b) ? a : b;

    printf("The large number is : %d",x);

    getch();
}
