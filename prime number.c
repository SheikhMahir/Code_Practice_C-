#include<stdio.h>
int main()
{
    while(1){
    int i,x,z=0;
    printf("Please enter number : ");
    scanf("%d",&x);

    for (i=2; i<x; i++)
    {
        if(x%i==0)
        {
            z++;
            break;
        }
    }
    if (z==0)
        printf("it's prime number.\n");
    else printf("it's not prime number.\n");
    getch();
}
}
