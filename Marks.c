#include<stdio.h>
int main()
{
    float x;
    printf("Please enter ur marks : ");
    scanf("%f",&x);

    if(x>=80)
        printf("Ur Grade is = A+");
    else if(x>=70)
        printf("Ur Grade is = A");
    else if(x>=60)
        printf("Ur Grade is = A-");
    else if(x>=50)
        printf("Ur Grade is = B");
    else if(x>=40)
        printf("Ur Grade is = C");
    else if(x>=33)
        printf("Ur Grade is = D");
    else
        printf("U r Fail...");

    getch();
}
