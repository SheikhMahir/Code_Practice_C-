#include<stdio.h>
int main()
{
    int x,y;
    printf("please enter year : ");
    scanf("%d",&x);

    y = (x%4==0) ? printf("leap year.") : printf("not leap year.");
    getch();
}
