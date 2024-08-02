#include<stdio.h>
int main()
{
    int x;
    char z;
    printf("Please enter 1st number : ");
    scanf("%d",&x);

    z = (x%400==0 && x%400!=0) ? printf("L") : printf("N");
    printf("%c",z);
    getch();
}
