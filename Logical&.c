#include<stdio.h>
int main()
{
    int x,y,z;
    printf("PLease enter 1st number = ");
    scanf("%d",&x);
    printf("PLease enter 2nd number = ");
    scanf("%d",&y);
    printf("PLease enter 3rd number = ");
    scanf("%d",&z);

    if (x>y && x>z)
        printf("1st number is Large number = %d",x);
    else if (y>z && y>x)
        printf("2nd number is Large number = %d",y);
    else if (z>x && z>y)
        printf("3rd number is Large number = %d",z);
    else
        printf("Numbers are equal.");

    getch();
}
