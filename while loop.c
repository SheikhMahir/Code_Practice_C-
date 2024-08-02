#include<stdio.h>
int main()
{
    int i,x;
    printf("Please enter loop starting point : ");
    scanf("%d",& i);
    printf("Please enter loop time : ");
    scanf("%d",& x);

    while(i<=x)
    {
        printf("%d. While loop practice.\n",i);// While Loop...
        i++;
    }
    getch();
}
