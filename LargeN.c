#include<stdio.h>
int main()
{
    int x,y;
    printf("PLease enter 1st num : ");
    scanf("%d",&x);
    printf("PLease enter 2nd num : ");
    scanf("%d",&y);

    if(x>y)
        printf("Large number = %d",x);

    else if(x<y)
        printf("Large number = %d",y);

    else
        printf("Numbers are equal.");

    getch();
}
