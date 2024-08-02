#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Please enter 1st number : ");
    scanf("%d",&a);
    printf("Please enter 2nd number : ");
    scanf("%d",&b);

    c=a&b;
    printf("a&b = %d\n",c);
    c=a|b;
    printf("a|b = %d\n",c);
    c=a^b;
    printf("a^b = %d\n",c);
    getch();
}
