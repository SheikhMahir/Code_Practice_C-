#include<stdio.h>
int main()
{
    int x,y;
    printf("Please enter loop starting point : ");
    scanf("%d",x);
    printf("Please enter loop time : ");
    scanf("%d",y);

    do
    {
        printf("%d. Do while loop practice.",x);
        x++;
    }
    while(x<=y);
    getch();
}
