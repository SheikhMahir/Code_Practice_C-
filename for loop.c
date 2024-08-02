#include<stdio.h>
int main()
{
    int i,x;
    printf("Please Enter Loop Times : ");
    scanf("%d",& x);
    for (i=1; i<=x; i++)
    {
        printf("%d",i);
        printf(" .For Loop Practice.\n");
    }
    getch();
}
