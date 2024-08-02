#include<stdio.h>
int main()
{
    int x;
    printf("PLease enter a Year : ");
    scanf("%d",&x);

    if(x%400==0)
        printf("Since %d is a Leap year.",x);
    else if(x%4==0 & x%100!=0)
        printf("Since %d is a Leap year.",x);
    else
        printf("Since %d is not Leap year.",x);

    getch();
}
