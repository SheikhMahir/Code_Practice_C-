#include<stdio.h>
int main()
{
    int x;
    printf("Please enter an Integer : ");
    scanf("%d",&x);

    if(x%2==0)
        printf("It's a Even.");

    else
        printf("It's an Odd.");

    getch();
}
